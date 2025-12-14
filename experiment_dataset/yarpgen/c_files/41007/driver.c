#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)27543;
unsigned int var_6 = 2926867855U;
unsigned short var_8 = (unsigned short)41044;
unsigned long long int var_10 = 11990041883080992752ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)27334;
short var_12 = (short)25113;
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
