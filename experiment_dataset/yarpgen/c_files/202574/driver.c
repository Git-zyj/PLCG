#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 115376175;
unsigned long long int var_1 = 9080476414973353760ULL;
short var_3 = (short)4528;
signed char var_4 = (signed char)4;
unsigned int var_5 = 2041838048U;
unsigned int var_6 = 1030669463U;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2996904673U;
unsigned int var_9 = 685943994U;
signed char var_10 = (signed char)59;
long long int var_11 = 105755243974525939LL;
signed char var_12 = (signed char)16;
long long int var_13 = -7609694091956033346LL;
int zero = 0;
int var_14 = 435752268;
unsigned long long int var_15 = 6774915592661243607ULL;
_Bool var_16 = (_Bool)1;
long long int var_17 = -4523701639312887702LL;
signed char var_18 = (signed char)-104;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
