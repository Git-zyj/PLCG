#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14478;
signed char var_3 = (signed char)-12;
int var_10 = 848631389;
long long int var_11 = 1255335990872588156LL;
short var_12 = (short)25288;
unsigned int var_14 = 3315837961U;
int zero = 0;
signed char var_16 = (signed char)-4;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)109;
int var_19 = -1847066876;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
