#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1079893539160382321ULL;
unsigned long long int var_2 = 9364084282947569116ULL;
unsigned long long int var_3 = 1491939211583442600ULL;
unsigned long long int var_4 = 7932792206626634266ULL;
_Bool var_7 = (_Bool)1;
long long int var_9 = 3938792334130738787LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_13 = (short)1663;
short var_14 = (short)-19175;
void init() {
}

void checksum() {
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
