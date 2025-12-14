#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55487;
short var_1 = (short)9192;
unsigned int var_5 = 3722315764U;
unsigned short var_7 = (unsigned short)53384;
unsigned long long int var_8 = 3712484493229561235ULL;
unsigned char var_9 = (unsigned char)255;
unsigned long long int var_11 = 1126953597873064843ULL;
long long int var_12 = -1377815435750655331LL;
signed char var_15 = (signed char)-64;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -1361138014672773521LL;
unsigned int var_19 = 2006835765U;
_Bool var_20 = (_Bool)1;
short var_21 = (short)15349;
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
