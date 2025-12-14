#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27447;
short var_5 = (short)-4625;
unsigned short var_8 = (unsigned short)38431;
unsigned int var_11 = 2532385562U;
signed char var_14 = (signed char)-93;
_Bool var_15 = (_Bool)0;
int var_16 = 743499767;
int zero = 0;
unsigned char var_17 = (unsigned char)246;
short var_18 = (short)-25685;
unsigned int var_19 = 2293773948U;
unsigned long long int var_20 = 14889123124048590496ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
