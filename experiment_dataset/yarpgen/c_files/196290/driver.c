#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 621396859U;
unsigned short var_9 = (unsigned short)14993;
signed char var_16 = (signed char)-126;
int zero = 0;
int var_17 = 887688741;
unsigned short var_18 = (unsigned short)16347;
void init() {
}

void checksum() {
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
