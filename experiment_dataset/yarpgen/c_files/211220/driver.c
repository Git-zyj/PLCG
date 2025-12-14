#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)20485;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 3913725466472223942ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)52505;
long long int var_13 = -7043593141370190163LL;
long long int var_16 = 1201926150464962193LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 9885325157493227957ULL;
unsigned long long int var_19 = 1264172141653178154ULL;
short var_20 = (short)19085;
short var_21 = (short)13105;
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
