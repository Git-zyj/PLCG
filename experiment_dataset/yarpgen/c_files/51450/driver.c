#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-12413;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 1482670612U;
long long int var_13 = -1618547262047311356LL;
signed char var_14 = (signed char)12;
unsigned short var_15 = (unsigned short)40756;
unsigned int var_16 = 2108492691U;
int var_17 = 1237778109;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)10738;
signed char var_22 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
