#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2824;
unsigned short var_2 = (unsigned short)4979;
int var_3 = -783214982;
signed char var_6 = (signed char)124;
unsigned int var_7 = 679726128U;
_Bool var_8 = (_Bool)0;
long long int var_9 = 5916553785591934017LL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)13267;
long long int var_12 = 8268129893107758896LL;
_Bool var_13 = (_Bool)1;
long long int var_15 = -4997228515980161568LL;
unsigned short var_16 = (unsigned short)15156;
int zero = 0;
unsigned char var_17 = (unsigned char)33;
short var_18 = (short)-7346;
unsigned long long int var_19 = 17308260374231142075ULL;
int var_20 = -1342169517;
short var_21 = (short)15566;
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
