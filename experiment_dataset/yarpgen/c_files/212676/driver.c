#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6289359637444639895LL;
unsigned long long int var_2 = 12972035499938777231ULL;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)0;
unsigned int var_12 = 3001245714U;
int zero = 0;
signed char var_14 = (signed char)-106;
unsigned char var_15 = (unsigned char)234;
unsigned short var_16 = (unsigned short)39412;
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
