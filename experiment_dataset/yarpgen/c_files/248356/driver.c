#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 8254951192338212367ULL;
unsigned short var_9 = (unsigned short)24049;
int zero = 0;
unsigned char var_10 = (unsigned char)83;
unsigned int var_11 = 3117627176U;
unsigned long long int var_12 = 13975314192128520447ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
