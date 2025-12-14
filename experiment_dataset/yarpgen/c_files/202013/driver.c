#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -887281447;
unsigned int var_1 = 491510439U;
unsigned short var_3 = (unsigned short)50815;
unsigned char var_4 = (unsigned char)223;
unsigned char var_5 = (unsigned char)141;
unsigned long long int var_9 = 8141438514337870707ULL;
int zero = 0;
long long int var_10 = 2234355203669014614LL;
int var_11 = 1479797427;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
