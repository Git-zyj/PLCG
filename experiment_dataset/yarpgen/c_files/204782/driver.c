#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
unsigned char var_1 = (unsigned char)231;
signed char var_3 = (signed char)81;
int var_8 = -2114932454;
int var_11 = -1788183957;
int zero = 0;
int var_15 = -2124128293;
unsigned short var_16 = (unsigned short)35758;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
