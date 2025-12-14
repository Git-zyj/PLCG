#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4061057610U;
short var_5 = (short)-16073;
signed char var_9 = (signed char)114;
unsigned long long int var_13 = 18195061412841259810ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)205;
unsigned short var_19 = (unsigned short)41138;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
