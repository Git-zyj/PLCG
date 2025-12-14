#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 87979837;
int var_2 = -935887914;
signed char var_3 = (signed char)-6;
signed char var_5 = (signed char)83;
int var_7 = 237264660;
unsigned int var_9 = 1235951343U;
int zero = 0;
int var_12 = -1561560638;
int var_13 = 101958651;
unsigned long long int var_14 = 13242377388498090924ULL;
signed char var_15 = (signed char)-73;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
