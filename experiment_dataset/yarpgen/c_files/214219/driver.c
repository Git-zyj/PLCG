#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18405;
long long int var_4 = -4439819333498645252LL;
unsigned int var_8 = 3715178151U;
unsigned char var_9 = (unsigned char)178;
int zero = 0;
int var_12 = 627691819;
short var_13 = (short)-9850;
void init() {
}

void checksum() {
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
