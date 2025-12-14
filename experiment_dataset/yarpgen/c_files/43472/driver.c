#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -788590;
long long int var_2 = 4597561238046207295LL;
unsigned char var_6 = (unsigned char)16;
_Bool var_8 = (_Bool)0;
long long int var_9 = 5323211020211409705LL;
int var_10 = -1078102283;
int var_13 = -1943820076;
short var_14 = (short)-2643;
unsigned int var_17 = 2893326044U;
int zero = 0;
short var_18 = (short)4578;
unsigned int var_19 = 3934977326U;
signed char var_20 = (signed char)100;
void init() {
}

void checksum() {
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
