#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7243226056444321387LL;
long long int var_1 = 649454472700091555LL;
int var_2 = -683568575;
long long int var_8 = -3302795825319950589LL;
long long int var_10 = -2111656126093285863LL;
unsigned long long int var_12 = 15634172041630384538ULL;
signed char var_13 = (signed char)124;
unsigned short var_15 = (unsigned short)51757;
int zero = 0;
long long int var_17 = -5033943510912706194LL;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-92;
unsigned char var_20 = (unsigned char)102;
long long int var_21 = 6482842621888371101LL;
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
