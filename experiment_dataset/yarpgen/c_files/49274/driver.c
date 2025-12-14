#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2394781723U;
signed char var_7 = (signed char)101;
unsigned long long int var_9 = 15457163129620940508ULL;
int zero = 0;
int var_16 = -1106714663;
unsigned int var_17 = 3863219305U;
unsigned int var_18 = 1730727434U;
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
