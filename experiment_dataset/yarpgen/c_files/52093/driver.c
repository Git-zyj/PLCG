#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)93;
signed char var_2 = (signed char)-104;
signed char var_9 = (signed char)-42;
int var_10 = 242351475;
int zero = 0;
unsigned int var_15 = 3415425378U;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)16864;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
