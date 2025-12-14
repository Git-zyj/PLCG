#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1404054668585073820ULL;
unsigned long long int var_1 = 16074164880311822912ULL;
signed char var_2 = (signed char)55;
unsigned int var_3 = 3673111875U;
unsigned long long int var_4 = 1932187358822227460ULL;
unsigned int var_5 = 937162698U;
short var_7 = (short)-29834;
unsigned short var_8 = (unsigned short)56086;
int var_9 = 1302149243;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -8712586168913632353LL;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-37;
int zero = 0;
unsigned int var_20 = 1807397187U;
unsigned short var_21 = (unsigned short)33571;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 14937866068016970088ULL;
unsigned int var_24 = 375921298U;
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
