#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26814;
unsigned long long int var_1 = 14011340132865114554ULL;
unsigned int var_7 = 3805984982U;
short var_9 = (short)32388;
int zero = 0;
unsigned char var_20 = (unsigned char)30;
unsigned long long int var_21 = 2835851849932045232ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
