#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6345874351403657567LL;
unsigned char var_8 = (unsigned char)11;
short var_10 = (short)648;
int zero = 0;
unsigned int var_12 = 3273237319U;
unsigned short var_13 = (unsigned short)38137;
unsigned char var_14 = (unsigned char)192;
short var_15 = (short)-12732;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
