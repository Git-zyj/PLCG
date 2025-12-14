#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2923212399706255529LL;
unsigned long long int var_9 = 16289482652171982106ULL;
int zero = 0;
signed char var_10 = (signed char)16;
unsigned short var_11 = (unsigned short)17848;
long long int var_12 = 1902341904717706627LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
