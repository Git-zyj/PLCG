#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 481457267350768459LL;
short var_3 = (short)21325;
_Bool var_4 = (_Bool)1;
int var_5 = 1478078591;
unsigned short var_6 = (unsigned short)49275;
unsigned int var_8 = 3730459952U;
signed char var_9 = (signed char)-106;
int zero = 0;
unsigned long long int var_10 = 6968821863251415032ULL;
unsigned int var_11 = 450222267U;
int var_12 = 1729120992;
unsigned long long int var_13 = 9564035264488428399ULL;
unsigned long long int var_14 = 13124395674098611524ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
