#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-25660;
unsigned int var_5 = 2688926099U;
unsigned char var_6 = (unsigned char)127;
signed char var_7 = (signed char)55;
unsigned short var_9 = (unsigned short)49872;
unsigned char var_11 = (unsigned char)128;
_Bool var_12 = (_Bool)0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)1101;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 9003345217825040279LL;
int var_21 = 979082690;
void init() {
}

void checksum() {
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
