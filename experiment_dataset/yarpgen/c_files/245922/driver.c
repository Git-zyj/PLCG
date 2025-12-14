#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -908331100;
unsigned long long int var_3 = 6351712608753930255ULL;
unsigned char var_6 = (unsigned char)194;
unsigned int var_7 = 2460436882U;
unsigned int var_8 = 276413404U;
short var_9 = (short)-23087;
int zero = 0;
unsigned short var_10 = (unsigned short)15761;
int var_11 = 1414925873;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
