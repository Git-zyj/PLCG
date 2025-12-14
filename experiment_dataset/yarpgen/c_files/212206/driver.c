#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25009;
short var_5 = (short)16901;
unsigned int var_6 = 2581329714U;
int var_7 = -232503117;
unsigned long long int var_8 = 4639337580229053118ULL;
unsigned long long int var_9 = 1221021277903741097ULL;
unsigned char var_10 = (unsigned char)135;
int zero = 0;
int var_12 = -633947374;
unsigned long long int var_13 = 17166600239838378090ULL;
unsigned short var_14 = (unsigned short)41595;
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
