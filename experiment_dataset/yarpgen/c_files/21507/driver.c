#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1045978949U;
short var_8 = (short)-4707;
unsigned char var_10 = (unsigned char)179;
_Bool var_12 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)93;
int var_16 = -705522921;
unsigned int var_17 = 868174648U;
signed char var_18 = (signed char)-28;
short var_19 = (short)16048;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
