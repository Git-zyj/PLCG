#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1087364646;
unsigned long long int var_4 = 6112055794983498372ULL;
signed char var_9 = (signed char)-112;
long long int var_11 = -6580153069134917825LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-112;
unsigned int var_14 = 3130047481U;
unsigned long long int var_15 = 9058210792355932712ULL;
signed char var_16 = (signed char)-61;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
