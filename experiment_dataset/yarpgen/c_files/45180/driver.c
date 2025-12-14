#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4959343092270839445LL;
unsigned short var_1 = (unsigned short)56894;
unsigned long long int var_2 = 13523284180962115182ULL;
long long int var_3 = -5979830767354505593LL;
unsigned long long int var_4 = 7276539852595981490ULL;
long long int var_5 = -2374447894000115628LL;
unsigned long long int var_7 = 7352600085057812544ULL;
unsigned char var_8 = (unsigned char)31;
unsigned long long int var_10 = 3687887921443206479ULL;
unsigned short var_11 = (unsigned short)33966;
long long int var_12 = -2819237992673970314LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = 825962450596273284LL;
long long int var_16 = -9140875284594151924LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)35730;
unsigned short var_21 = (unsigned short)21278;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
