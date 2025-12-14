#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7214021081850598409LL;
long long int var_5 = -7389700993775103502LL;
long long int var_6 = 7803539635645583547LL;
short var_7 = (short)19061;
signed char var_9 = (signed char)97;
int zero = 0;
unsigned short var_15 = (unsigned short)44154;
unsigned int var_16 = 3661450567U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
