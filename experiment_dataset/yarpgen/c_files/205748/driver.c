#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1908149722U;
unsigned char var_5 = (unsigned char)158;
unsigned short var_6 = (unsigned short)5918;
unsigned short var_7 = (unsigned short)36149;
unsigned short var_8 = (unsigned short)14660;
unsigned char var_9 = (unsigned char)156;
short var_10 = (short)9822;
long long int var_11 = 2297566732554934447LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3792162887U;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_18 = 4748133470898147495LL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 12266858645865606220ULL;
unsigned long long int var_21 = 10400223929037697817ULL;
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
