#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)14;
signed char var_1 = (signed char)86;
unsigned int var_2 = 4024946054U;
unsigned short var_3 = (unsigned short)13978;
unsigned short var_4 = (unsigned short)18204;
unsigned char var_9 = (unsigned char)83;
int zero = 0;
short var_15 = (short)7971;
unsigned char var_16 = (unsigned char)155;
unsigned short var_17 = (unsigned short)41460;
unsigned short var_18 = (unsigned short)50196;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
