#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1134940261;
unsigned long long int var_8 = 16974235501459125735ULL;
unsigned long long int var_9 = 13517470280830320908ULL;
int zero = 0;
short var_12 = (short)8049;
unsigned char var_13 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
