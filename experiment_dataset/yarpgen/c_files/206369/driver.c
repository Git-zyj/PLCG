#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-31691;
int var_5 = -361182487;
signed char var_7 = (signed char)86;
int var_8 = -329539977;
unsigned char var_11 = (unsigned char)37;
unsigned short var_13 = (unsigned short)53670;
signed char var_14 = (signed char)40;
_Bool var_17 = (_Bool)0;
int var_19 = 36331873;
int zero = 0;
int var_20 = -352034992;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)15;
short var_23 = (short)-21714;
long long int var_24 = 6239864651656380682LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
