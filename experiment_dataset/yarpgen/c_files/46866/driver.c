#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2458960923U;
unsigned long long int var_8 = 7860080802177236953ULL;
unsigned char var_11 = (unsigned char)201;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)23625;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
