#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47570;
short var_2 = (short)-759;
short var_6 = (short)13776;
long long int var_7 = 4752213327500199550LL;
signed char var_14 = (signed char)-4;
int zero = 0;
unsigned char var_17 = (unsigned char)154;
signed char var_18 = (signed char)74;
unsigned int var_19 = 2838292477U;
void init() {
}

void checksum() {
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
