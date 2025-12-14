#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1568450216U;
short var_4 = (short)16097;
signed char var_5 = (signed char)-10;
unsigned long long int var_6 = 15712906398699383170ULL;
_Bool var_7 = (_Bool)1;
signed char var_12 = (signed char)-34;
signed char var_13 = (signed char)-41;
int zero = 0;
unsigned int var_15 = 1187984037U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int var_18 = -1989129671;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
