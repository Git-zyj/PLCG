#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 1625879528953642246ULL;
unsigned long long int var_2 = 4291424439016747029ULL;
int var_3 = 1987313344;
unsigned long long int var_5 = 13820485461713462202ULL;
unsigned short var_6 = (unsigned short)49364;
signed char var_7 = (signed char)0;
short var_8 = (short)15328;
long long int var_9 = 3918719142572822710LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 5749066095342063735LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-8920;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
