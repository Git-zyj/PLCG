#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-61;
unsigned char var_9 = (unsigned char)108;
unsigned short var_11 = (unsigned short)9741;
long long int var_12 = 3237374692186061971LL;
short var_14 = (short)-14386;
int zero = 0;
int var_16 = -808158390;
unsigned char var_17 = (unsigned char)204;
signed char var_18 = (signed char)51;
void init() {
}

void checksum() {
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
