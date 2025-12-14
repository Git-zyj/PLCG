#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 199468973;
int var_2 = 161913173;
unsigned long long int var_4 = 14342106608071621940ULL;
unsigned int var_9 = 3431199075U;
int zero = 0;
unsigned int var_20 = 3318865889U;
long long int var_21 = -6511931993870073140LL;
unsigned char var_22 = (unsigned char)156;
unsigned char var_23 = (unsigned char)2;
void init() {
}

void checksum() {
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
