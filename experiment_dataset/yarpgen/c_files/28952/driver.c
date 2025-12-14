#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)22061;
unsigned long long int var_7 = 10293802479453055582ULL;
long long int var_8 = 8211354134908459278LL;
unsigned char var_10 = (unsigned char)5;
unsigned short var_13 = (unsigned short)14217;
int zero = 0;
short var_19 = (short)14897;
short var_20 = (short)-1135;
long long int var_21 = 8147501759037728031LL;
int var_22 = -382249114;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
