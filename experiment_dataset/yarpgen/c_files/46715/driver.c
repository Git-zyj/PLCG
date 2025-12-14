#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -934797938;
int var_3 = 967683675;
int var_6 = 910861617;
signed char var_8 = (signed char)70;
unsigned long long int var_9 = 11803958486159148839ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)168;
unsigned char var_11 = (unsigned char)51;
int var_12 = -1402845147;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
