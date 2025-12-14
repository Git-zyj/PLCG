#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6245700074245633260ULL;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 469080364U;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)44;
signed char var_9 = (signed char)124;
int zero = 0;
unsigned int var_16 = 3018228529U;
long long int var_17 = -5400676512653829924LL;
unsigned short var_18 = (unsigned short)34840;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
