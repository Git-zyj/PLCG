#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2094532121;
int var_7 = 140511970;
unsigned short var_11 = (unsigned short)34602;
int zero = 0;
long long int var_17 = 8382924459976936049LL;
unsigned int var_18 = 1182976341U;
short var_19 = (short)11982;
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
