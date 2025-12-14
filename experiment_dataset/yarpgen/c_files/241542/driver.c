#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2644189981U;
unsigned int var_3 = 3471589634U;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-27828;
unsigned short var_9 = (unsigned short)49778;
int zero = 0;
unsigned int var_14 = 3373238798U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
