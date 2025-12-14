#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)23208;
unsigned short var_9 = (unsigned short)8815;
int zero = 0;
unsigned short var_12 = (unsigned short)40098;
unsigned short var_13 = (unsigned short)15364;
unsigned long long int var_14 = 11816679468810195097ULL;
unsigned long long int var_15 = 16249876996695795461ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
