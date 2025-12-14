#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)30;
int var_5 = -1486209371;
signed char var_9 = (signed char)-27;
unsigned char var_10 = (unsigned char)192;
int zero = 0;
signed char var_16 = (signed char)22;
int var_17 = -248537499;
unsigned char var_18 = (unsigned char)238;
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
