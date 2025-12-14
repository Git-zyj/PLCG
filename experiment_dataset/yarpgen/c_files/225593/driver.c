#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12373;
int var_1 = 205483135;
signed char var_2 = (signed char)-39;
short var_5 = (short)-32098;
unsigned int var_9 = 2404221880U;
int zero = 0;
unsigned long long int var_12 = 4245154082386636454ULL;
short var_13 = (short)7384;
unsigned int var_14 = 4253449195U;
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
