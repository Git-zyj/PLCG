#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)48;
unsigned short var_2 = (unsigned short)37904;
long long int var_3 = 4779541149733756824LL;
short var_4 = (short)1716;
signed char var_6 = (signed char)75;
int zero = 0;
signed char var_12 = (signed char)98;
unsigned char var_13 = (unsigned char)148;
short var_14 = (short)-28924;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
