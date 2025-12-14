#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2951350795U;
unsigned int var_8 = 3666271458U;
signed char var_10 = (signed char)51;
short var_13 = (short)-23788;
int zero = 0;
unsigned short var_19 = (unsigned short)34119;
signed char var_20 = (signed char)-28;
long long int var_21 = 5022136968271204683LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
