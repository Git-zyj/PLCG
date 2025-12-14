#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 400993300;
unsigned char var_3 = (unsigned char)102;
unsigned char var_6 = (unsigned char)195;
short var_9 = (short)-27959;
int zero = 0;
short var_11 = (short)343;
unsigned long long int var_12 = 16973007855114763671ULL;
void init() {
}

void checksum() {
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
