#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3018477142199466113LL;
short var_2 = (short)-396;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)56172;
int zero = 0;
unsigned char var_10 = (unsigned char)102;
unsigned short var_11 = (unsigned short)25386;
unsigned long long int var_12 = 7860764374876025260ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
