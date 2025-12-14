#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2415038161864616772LL;
short var_1 = (short)19291;
_Bool var_2 = (_Bool)0;
int var_3 = 1935161049;
short var_4 = (short)-31963;
signed char var_5 = (signed char)35;
unsigned char var_6 = (unsigned char)227;
unsigned long long int var_7 = 16311882514084558369ULL;
signed char var_8 = (signed char)36;
signed char var_9 = (signed char)-75;
unsigned int var_10 = 690239701U;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)42357;
int var_13 = 1418714625;
long long int var_14 = -1857301515611812708LL;
int zero = 0;
short var_15 = (short)25301;
unsigned short var_16 = (unsigned short)2222;
_Bool var_17 = (_Bool)1;
short var_18 = (short)5473;
unsigned char var_19 = (unsigned char)166;
unsigned int var_20 = 2099118956U;
long long int var_21 = -4149671593496076079LL;
signed char var_22 = (signed char)-22;
unsigned char var_23 = (unsigned char)195;
unsigned int var_24 = 2412384031U;
unsigned long long int var_25 = 13155244665121766903ULL;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)-68;
short var_28 = (short)1953;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
