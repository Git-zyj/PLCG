#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3708555212U;
unsigned short var_3 = (unsigned short)2933;
unsigned long long int var_7 = 8902953489276466544ULL;
unsigned short var_8 = (unsigned short)30213;
unsigned short var_9 = (unsigned short)47256;
unsigned int var_10 = 4250956799U;
signed char var_12 = (signed char)-86;
long long int var_13 = -2184701398090325573LL;
int zero = 0;
short var_18 = (short)19917;
unsigned short var_19 = (unsigned short)37686;
unsigned int var_20 = 3694202552U;
unsigned long long int var_21 = 2135828027609600282ULL;
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
