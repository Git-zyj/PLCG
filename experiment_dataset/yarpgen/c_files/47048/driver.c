#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2040695181;
unsigned short var_4 = (unsigned short)20588;
int var_5 = -1234662265;
unsigned int var_7 = 4039587293U;
unsigned long long int var_10 = 7687282446615220164ULL;
unsigned long long int var_11 = 9078478789221621730ULL;
int var_12 = 981787873;
unsigned short var_13 = (unsigned short)3086;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)11561;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
