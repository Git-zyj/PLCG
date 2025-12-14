#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)35658;
unsigned long long int var_11 = 14093650275228001368ULL;
unsigned long long int var_14 = 4473086013739754269ULL;
unsigned char var_15 = (unsigned char)163;
unsigned long long int var_16 = 10204877403169891230ULL;
unsigned char var_18 = (unsigned char)185;
int zero = 0;
unsigned long long int var_19 = 17642087631911138025ULL;
signed char var_20 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
