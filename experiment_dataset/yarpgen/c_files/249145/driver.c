#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)211;
unsigned short var_3 = (unsigned short)27589;
long long int var_9 = 7823204833473959219LL;
int var_10 = 1193783559;
int zero = 0;
int var_15 = 1401252067;
short var_16 = (short)5954;
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
