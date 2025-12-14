#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2208239147186389933LL;
long long int var_3 = 5485445864357218658LL;
unsigned char var_6 = (unsigned char)89;
signed char var_7 = (signed char)-81;
short var_8 = (short)-29472;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)62239;
int zero = 0;
short var_15 = (short)26362;
int var_16 = 585695104;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
