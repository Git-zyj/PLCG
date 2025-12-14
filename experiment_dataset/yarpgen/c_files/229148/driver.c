#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16465411484075640321ULL;
int var_4 = -1021614738;
short var_5 = (short)15600;
short var_9 = (short)989;
int zero = 0;
unsigned int var_17 = 1349907460U;
unsigned short var_18 = (unsigned short)19786;
unsigned int var_19 = 4261316034U;
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
