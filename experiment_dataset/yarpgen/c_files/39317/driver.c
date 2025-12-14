#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
long long int var_1 = 1126530039301624287LL;
signed char var_4 = (signed char)-111;
signed char var_6 = (signed char)-88;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 14844364666857903071ULL;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)100;
signed char var_15 = (signed char)17;
long long int var_16 = -6554605989096210970LL;
int zero = 0;
signed char var_17 = (signed char)-37;
unsigned short var_18 = (unsigned short)31458;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)30938;
unsigned short var_21 = (unsigned short)1326;
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
