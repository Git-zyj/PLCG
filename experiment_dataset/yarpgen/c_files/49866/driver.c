#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1240274998U;
unsigned long long int var_7 = 10428710466935069543ULL;
int var_13 = 99079630;
unsigned int var_14 = 2964150743U;
unsigned long long int var_15 = 15084290401830691934ULL;
long long int var_16 = 4727217519079417221LL;
int zero = 0;
unsigned short var_18 = (unsigned short)31413;
short var_19 = (short)20539;
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
