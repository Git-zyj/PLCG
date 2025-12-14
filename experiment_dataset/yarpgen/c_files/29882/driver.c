#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)157;
unsigned long long int var_7 = 13438875209653606156ULL;
long long int var_8 = -384977516923108773LL;
unsigned long long int var_9 = 12419621230362632411ULL;
unsigned short var_11 = (unsigned short)49071;
unsigned long long int var_15 = 7754624323464046231ULL;
unsigned int var_17 = 2196914191U;
int zero = 0;
unsigned short var_19 = (unsigned short)63636;
unsigned long long int var_20 = 3083042368938020569ULL;
unsigned int var_21 = 4069577937U;
unsigned char var_22 = (unsigned char)69;
long long int var_23 = 3656168196324458444LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
