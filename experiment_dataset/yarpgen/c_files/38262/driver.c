#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35014;
unsigned short var_1 = (unsigned short)9456;
unsigned long long int var_6 = 7418643650520451893ULL;
unsigned char var_9 = (unsigned char)221;
unsigned short var_11 = (unsigned short)9245;
unsigned long long int var_14 = 7545036123472162077ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)93;
unsigned char var_20 = (unsigned char)28;
unsigned short var_21 = (unsigned short)27748;
unsigned long long int var_22 = 11286021987378326735ULL;
unsigned short var_23 = (unsigned short)24962;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
