#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8927426405343706254LL;
unsigned short var_5 = (unsigned short)12567;
unsigned int var_10 = 1366852324U;
short var_12 = (short)-12761;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 6091266280877393022LL;
unsigned short var_15 = (unsigned short)39141;
unsigned int var_16 = 521059615U;
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
