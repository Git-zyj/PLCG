#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1696766454219537623LL;
long long int var_6 = 3968455596279709570LL;
long long int var_10 = 1144690047116148973LL;
int zero = 0;
unsigned char var_12 = (unsigned char)235;
unsigned char var_13 = (unsigned char)142;
unsigned int var_14 = 551057796U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
