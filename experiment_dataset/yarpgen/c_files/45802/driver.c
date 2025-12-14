#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
unsigned char var_1 = (unsigned char)36;
signed char var_3 = (signed char)-98;
int var_4 = 153038257;
int var_5 = -316251522;
int zero = 0;
signed char var_14 = (signed char)-117;
int var_15 = 254351126;
int var_16 = 279489439;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
