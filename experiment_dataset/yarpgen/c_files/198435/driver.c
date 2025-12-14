#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 717432236;
unsigned int var_3 = 4133422289U;
int var_4 = -2082583942;
unsigned short var_5 = (unsigned short)24168;
unsigned short var_11 = (unsigned short)33526;
int zero = 0;
short var_16 = (short)-29352;
short var_17 = (short)17707;
long long int var_18 = 4039049055227367014LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
