#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1117131289;
unsigned short var_2 = (unsigned short)51988;
int var_5 = 201331347;
unsigned long long int var_9 = 4276299033013901194ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)46806;
unsigned short var_13 = (unsigned short)63843;
unsigned long long int var_14 = 11428876577339886476ULL;
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
