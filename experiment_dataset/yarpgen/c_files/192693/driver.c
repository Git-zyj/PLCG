#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = -1559888445;
_Bool var_4 = (_Bool)1;
long long int var_6 = 8767375845205470783LL;
signed char var_7 = (signed char)-67;
unsigned long long int var_11 = 6136573454636479753ULL;
unsigned long long int var_14 = 3032017890884383274ULL;
short var_15 = (short)29285;
unsigned char var_16 = (unsigned char)164;
int zero = 0;
unsigned char var_17 = (unsigned char)80;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
