#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27420;
long long int var_1 = 8805117639834249557LL;
long long int var_2 = 577564914308970848LL;
unsigned int var_3 = 2090087737U;
short var_4 = (short)7220;
unsigned short var_5 = (unsigned short)30837;
unsigned long long int var_6 = 141674803850761122ULL;
unsigned int var_9 = 4009661431U;
unsigned int var_10 = 1050640973U;
signed char var_11 = (signed char)-115;
unsigned int var_12 = 3576846576U;
unsigned int var_13 = 2712538341U;
short var_14 = (short)-3978;
int zero = 0;
int var_15 = 1435247186;
long long int var_16 = 6572665594221223871LL;
unsigned char var_17 = (unsigned char)190;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
