#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4572210564497470627ULL;
unsigned long long int var_5 = 4569629402636323948ULL;
long long int var_9 = 7703642096226501602LL;
int zero = 0;
signed char var_11 = (signed char)-60;
short var_12 = (short)-9490;
long long int var_13 = -3047214788728414165LL;
unsigned char var_14 = (unsigned char)222;
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
