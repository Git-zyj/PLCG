#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-983;
short var_1 = (short)-6477;
signed char var_5 = (signed char)-104;
int var_7 = -817347391;
int var_9 = -1829408131;
int var_10 = -1890631974;
long long int var_11 = 6654500799069064222LL;
int zero = 0;
unsigned char var_12 = (unsigned char)148;
int var_13 = -133795831;
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
