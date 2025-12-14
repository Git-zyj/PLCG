#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2016441117492100225ULL;
unsigned char var_3 = (unsigned char)116;
int var_10 = -159794077;
int zero = 0;
unsigned int var_18 = 2038476988U;
unsigned char var_19 = (unsigned char)245;
short var_20 = (short)101;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
