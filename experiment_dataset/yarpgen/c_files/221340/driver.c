#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5714394701202572084LL;
signed char var_2 = (signed char)51;
int var_6 = 1491765492;
int var_7 = 610079272;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 7503840930589155834ULL;
int zero = 0;
unsigned int var_14 = 2047452481U;
short var_15 = (short)-25205;
unsigned char var_16 = (unsigned char)122;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
