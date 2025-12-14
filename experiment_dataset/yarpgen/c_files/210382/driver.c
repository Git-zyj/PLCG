#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 8555177982279500930LL;
signed char var_8 = (signed char)-123;
int var_10 = 1080537392;
int zero = 0;
int var_13 = 288432790;
signed char var_14 = (signed char)-75;
unsigned char var_15 = (unsigned char)193;
signed char var_16 = (signed char)-111;
unsigned int var_17 = 2737320506U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
