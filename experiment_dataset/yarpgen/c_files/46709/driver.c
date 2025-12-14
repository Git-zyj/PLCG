#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = -1293562635;
unsigned int var_12 = 629160281U;
int zero = 0;
unsigned short var_19 = (unsigned short)26294;
unsigned long long int var_20 = 16962247065897258890ULL;
long long int var_21 = -3357440176215980351LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
