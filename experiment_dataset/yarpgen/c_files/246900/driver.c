#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9737434002264234002ULL;
int var_1 = -439401126;
int var_3 = 2071228928;
int var_6 = -149802981;
unsigned char var_7 = (unsigned char)107;
unsigned long long int var_9 = 7463077301472804660ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)47;
unsigned int var_12 = 416280686U;
signed char var_13 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
