#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31323;
unsigned short var_1 = (unsigned short)21620;
_Bool var_13 = (_Bool)0;
unsigned long long int var_16 = 18080318414193395005ULL;
int zero = 0;
short var_18 = (short)4903;
unsigned long long int var_19 = 2205059953943350279ULL;
short var_20 = (short)-31359;
unsigned long long int var_21 = 8206686673156311534ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
