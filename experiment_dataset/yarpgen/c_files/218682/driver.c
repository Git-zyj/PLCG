#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14474760268054301345ULL;
long long int var_6 = 706576392288031812LL;
int var_8 = 828572338;
signed char var_11 = (signed char)-15;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_19 = (short)-365;
long long int var_20 = -2809572656557388543LL;
int var_21 = -889750999;
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
