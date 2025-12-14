#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)114;
signed char var_6 = (signed char)-28;
int var_7 = -1431800045;
int var_8 = -56698443;
short var_9 = (short)-10486;
unsigned int var_10 = 2742255891U;
int var_12 = 1789021532;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 15252315357874485784ULL;
long long int var_16 = -549891850964649723LL;
void init() {
}

void checksum() {
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
