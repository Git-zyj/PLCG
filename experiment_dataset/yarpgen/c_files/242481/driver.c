#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -8662801926358342957LL;
unsigned int var_3 = 834649867U;
signed char var_4 = (signed char)-100;
short var_5 = (short)22703;
short var_7 = (short)16856;
signed char var_8 = (signed char)-126;
_Bool var_9 = (_Bool)0;
int var_10 = 836576559;
int zero = 0;
unsigned int var_11 = 3692141586U;
unsigned short var_12 = (unsigned short)46298;
unsigned long long int var_13 = 495216865759618716ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
