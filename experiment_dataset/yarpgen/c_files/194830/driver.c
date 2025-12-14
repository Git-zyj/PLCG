#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10489;
short var_2 = (short)19165;
short var_7 = (short)-17176;
long long int var_12 = -3521890595657879099LL;
signed char var_14 = (signed char)-107;
unsigned int var_17 = 1270475973U;
int zero = 0;
unsigned short var_18 = (unsigned short)2668;
unsigned int var_19 = 3882574454U;
void init() {
}

void checksum() {
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
