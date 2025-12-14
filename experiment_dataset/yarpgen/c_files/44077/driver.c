#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)217;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2022945887U;
_Bool var_4 = (_Bool)0;
short var_5 = (short)2643;
unsigned char var_6 = (unsigned char)60;
signed char var_9 = (signed char)-28;
long long int var_10 = 402293678505146151LL;
int zero = 0;
unsigned int var_11 = 2365302314U;
long long int var_12 = 2339179990922534745LL;
short var_13 = (short)32635;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
