#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2558917892U;
unsigned int var_2 = 1710628959U;
unsigned long long int var_3 = 16133867160441177560ULL;
long long int var_6 = 6278300967554059363LL;
int zero = 0;
short var_11 = (short)-18751;
signed char var_12 = (signed char)50;
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
