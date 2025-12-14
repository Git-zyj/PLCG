#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 512043555U;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)124;
unsigned int var_5 = 3680540733U;
short var_6 = (short)-8101;
short var_8 = (short)-8842;
_Bool var_11 = (_Bool)1;
unsigned long long int var_15 = 1860191332789957412ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)53;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
