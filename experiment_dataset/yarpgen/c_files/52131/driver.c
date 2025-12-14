#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6179;
unsigned long long int var_2 = 8543109817046597870ULL;
unsigned long long int var_8 = 10457437254858083837ULL;
unsigned int var_11 = 3838603261U;
int zero = 0;
int var_15 = -142486334;
short var_16 = (short)-21799;
short var_17 = (short)5969;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
