#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7931117220521174986LL;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
short var_8 = (short)-10665;
int var_10 = -955342754;
signed char var_16 = (signed char)-73;
int zero = 0;
int var_19 = 795466461;
signed char var_20 = (signed char)-2;
unsigned short var_21 = (unsigned short)32151;
unsigned short var_22 = (unsigned short)48100;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
