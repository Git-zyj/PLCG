#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23941;
long long int var_4 = 7959817664335450203LL;
unsigned long long int var_6 = 5858763459123733704ULL;
long long int var_9 = -4683832457336023855LL;
int zero = 0;
unsigned short var_10 = (unsigned short)3911;
signed char var_11 = (signed char)33;
unsigned char var_12 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
