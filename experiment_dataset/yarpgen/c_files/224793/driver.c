#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -705825283;
long long int var_7 = 2209688814298510869LL;
unsigned int var_8 = 1308375900U;
int zero = 0;
unsigned char var_10 = (unsigned char)124;
int var_11 = -1863853889;
short var_12 = (short)-12996;
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
