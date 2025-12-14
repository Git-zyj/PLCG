#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7450420586934494544ULL;
signed char var_1 = (signed char)82;
signed char var_3 = (signed char)77;
long long int var_5 = 167954025241631165LL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)12398;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 12438754048496115157ULL;
int var_13 = -773674706;
int zero = 0;
unsigned short var_15 = (unsigned short)24272;
_Bool var_16 = (_Bool)1;
long long int var_17 = 4029033921290548492LL;
unsigned short var_18 = (unsigned short)10745;
unsigned int var_19 = 386831884U;
unsigned char var_20 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
