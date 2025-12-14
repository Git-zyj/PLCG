#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -311482175;
signed char var_3 = (signed char)-47;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 3640468578344807947ULL;
unsigned long long int var_6 = 9809572023988481152ULL;
long long int var_7 = 3711610044328334477LL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)119;
long long int var_14 = -1723175850278691507LL;
int var_15 = 1403530457;
unsigned short var_16 = (unsigned short)12729;
unsigned int var_17 = 3883329808U;
int zero = 0;
long long int var_18 = 5693512036021037067LL;
signed char var_19 = (signed char)101;
unsigned short var_20 = (unsigned short)11752;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)30;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
