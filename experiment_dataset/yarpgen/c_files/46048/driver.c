#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2116285583U;
signed char var_5 = (signed char)-18;
signed char var_6 = (signed char)98;
long long int var_8 = 3942990583293643996LL;
unsigned int var_12 = 2406924153U;
_Bool var_14 = (_Bool)1;
short var_15 = (short)15950;
int zero = 0;
unsigned char var_16 = (unsigned char)226;
signed char var_17 = (signed char)-18;
unsigned int var_18 = 3611189598U;
void init() {
}

void checksum() {
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
