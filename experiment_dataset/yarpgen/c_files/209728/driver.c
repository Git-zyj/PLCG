#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7124099206938858974LL;
unsigned short var_3 = (unsigned short)55550;
unsigned char var_4 = (unsigned char)95;
int var_5 = -690305863;
short var_8 = (short)7378;
unsigned long long int var_9 = 2667371522260244737ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)9;
long long int var_17 = -81572235717957715LL;
_Bool var_18 = (_Bool)0;
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
