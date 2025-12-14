#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2503127474U;
short var_2 = (short)27789;
int var_4 = -924455464;
unsigned short var_5 = (unsigned short)55398;
long long int var_10 = 7086526051654217027LL;
long long int var_14 = -2024894788154356341LL;
int zero = 0;
unsigned int var_16 = 2184293540U;
long long int var_17 = 6341137063918877851LL;
unsigned short var_18 = (unsigned short)27262;
unsigned char var_19 = (unsigned char)86;
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
