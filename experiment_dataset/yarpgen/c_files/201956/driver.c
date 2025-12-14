#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1279710265U;
long long int var_15 = 8909344001131357594LL;
unsigned short var_16 = (unsigned short)64325;
int zero = 0;
unsigned long long int var_19 = 2849723188933445088ULL;
unsigned short var_20 = (unsigned short)64931;
unsigned int var_21 = 440323272U;
unsigned short var_22 = (unsigned short)20063;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
