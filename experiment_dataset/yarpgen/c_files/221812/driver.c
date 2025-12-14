#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
int var_4 = -353914922;
unsigned short var_5 = (unsigned short)58920;
unsigned short var_8 = (unsigned short)9455;
short var_9 = (short)9295;
short var_12 = (short)9492;
long long int var_15 = 2208128136208867812LL;
int zero = 0;
short var_16 = (short)-21739;
signed char var_17 = (signed char)41;
void init() {
}

void checksum() {
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
