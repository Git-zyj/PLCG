#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2117173378;
unsigned char var_5 = (unsigned char)215;
int var_7 = 181206142;
int zero = 0;
unsigned short var_17 = (unsigned short)15005;
unsigned char var_18 = (unsigned char)147;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
