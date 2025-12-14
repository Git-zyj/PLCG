#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -233589314820829311LL;
unsigned int var_3 = 1296965887U;
unsigned long long int var_5 = 816831398932476433ULL;
int var_6 = -1389190158;
unsigned long long int var_12 = 3882853524390851424ULL;
unsigned int var_13 = 2730595921U;
long long int var_14 = -9104400298382075352LL;
int zero = 0;
short var_16 = (short)-19548;
_Bool var_17 = (_Bool)0;
long long int var_18 = 906100584887775150LL;
long long int var_19 = -7885460876184816726LL;
unsigned char var_20 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
