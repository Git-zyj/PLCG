#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 5009647327113607396ULL;
unsigned short var_9 = (unsigned short)19601;
long long int var_14 = 8867506496267638403LL;
int zero = 0;
int var_16 = -572524266;
unsigned short var_17 = (unsigned short)38697;
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
