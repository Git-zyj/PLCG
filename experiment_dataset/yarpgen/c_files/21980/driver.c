#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1377295168;
int var_1 = -572234144;
signed char var_3 = (signed char)-43;
long long int var_5 = 1788437205545449438LL;
unsigned int var_9 = 3478565376U;
signed char var_10 = (signed char)70;
signed char var_12 = (signed char)-68;
int var_14 = 1380051864;
int zero = 0;
unsigned short var_18 = (unsigned short)2519;
short var_19 = (short)3874;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
