#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2187841954U;
int var_5 = 1454513077;
long long int var_9 = 3630575210778568900LL;
int zero = 0;
int var_11 = -957371226;
unsigned char var_12 = (unsigned char)13;
unsigned long long int var_13 = 5555958375850605277ULL;
int var_14 = -839666691;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
