#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)16;
unsigned long long int var_3 = 6999101554799165567ULL;
unsigned int var_5 = 2926422315U;
unsigned char var_9 = (unsigned char)255;
int zero = 0;
short var_11 = (short)-7191;
signed char var_12 = (signed char)123;
long long int var_13 = -3105795089653821336LL;
signed char var_14 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
