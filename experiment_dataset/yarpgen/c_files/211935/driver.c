#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4011960857U;
signed char var_1 = (signed char)-74;
int var_13 = -2025409381;
int var_14 = -527257767;
int zero = 0;
unsigned char var_17 = (unsigned char)155;
unsigned char var_18 = (unsigned char)29;
long long int var_19 = -4311237261035228443LL;
unsigned int var_20 = 3219123157U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
