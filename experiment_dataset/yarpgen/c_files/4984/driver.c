#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)58237;
signed char var_8 = (signed char)(-127 - 1);
unsigned short var_12 = (unsigned short)4260;
short var_14 = (short)31287;
short var_15 = (short)13357;
unsigned int var_16 = 3696528440U;
int zero = 0;
unsigned short var_17 = (unsigned short)53862;
short var_18 = (short)-24862;
unsigned long long int var_19 = 5536713805687748632ULL;
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
