#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 10598871112694601573ULL;
unsigned int var_12 = 991717679U;
int zero = 0;
unsigned long long int var_13 = 682496111753003240ULL;
int var_14 = -1316434343;
unsigned short var_15 = (unsigned short)52849;
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
