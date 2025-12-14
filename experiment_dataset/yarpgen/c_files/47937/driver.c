#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 564912599U;
long long int var_3 = 217568833637355551LL;
signed char var_6 = (signed char)-88;
signed char var_12 = (signed char)-28;
int zero = 0;
unsigned int var_13 = 3009367863U;
unsigned char var_14 = (unsigned char)44;
int var_15 = -504156164;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
