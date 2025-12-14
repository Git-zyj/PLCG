#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-58;
int var_3 = -2112228532;
signed char var_10 = (signed char)6;
int zero = 0;
unsigned int var_14 = 1732318607U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)32729;
unsigned short var_17 = (unsigned short)29423;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)7;
unsigned long long int var_21 = 18252971037117906592ULL;
signed char var_22 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
