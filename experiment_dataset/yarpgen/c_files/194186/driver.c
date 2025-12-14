#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6489455726386580159ULL;
unsigned char var_3 = (unsigned char)227;
signed char var_5 = (signed char)31;
unsigned char var_6 = (unsigned char)168;
unsigned int var_9 = 3132429974U;
signed char var_10 = (signed char)25;
int zero = 0;
short var_11 = (short)10887;
unsigned int var_12 = 3815771164U;
signed char var_13 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
