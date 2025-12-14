#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)34790;
unsigned short var_3 = (unsigned short)8454;
unsigned long long int var_8 = 14774933859661393632ULL;
long long int var_9 = 334638179208960231LL;
long long int var_10 = 4118662377680350928LL;
signed char var_11 = (signed char)23;
int zero = 0;
unsigned long long int var_12 = 10758850064781289007ULL;
unsigned long long int var_13 = 10186204084143917331ULL;
unsigned long long int var_14 = 1743519409796562040ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
