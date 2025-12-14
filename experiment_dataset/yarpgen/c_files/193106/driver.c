#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17259486344441376383ULL;
unsigned long long int var_9 = 18362903566447198010ULL;
int zero = 0;
unsigned long long int var_13 = 9712515862861556196ULL;
unsigned int var_14 = 4289102504U;
unsigned long long int var_15 = 18099106448040156821ULL;
int var_16 = -1621104454;
unsigned long long int var_17 = 17252602099585262788ULL;
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
