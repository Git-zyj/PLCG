#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25078;
_Bool var_2 = (_Bool)1;
unsigned long long int var_5 = 3462264609495802916ULL;
long long int var_6 = -5170543723387885370LL;
long long int var_8 = -1079900674324900800LL;
short var_10 = (short)-12270;
unsigned int var_11 = 1412420162U;
int var_16 = -1175767246;
int zero = 0;
long long int var_17 = 5868819767247809209LL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
