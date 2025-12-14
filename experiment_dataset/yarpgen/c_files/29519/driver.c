#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)192;
unsigned char var_2 = (unsigned char)81;
signed char var_5 = (signed char)19;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)217;
int zero = 0;
signed char var_15 = (signed char)14;
unsigned short var_16 = (unsigned short)32016;
unsigned short var_17 = (unsigned short)19387;
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
