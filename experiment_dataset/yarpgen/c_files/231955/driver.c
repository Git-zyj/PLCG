#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-26;
short var_3 = (short)29230;
unsigned short var_5 = (unsigned short)57921;
int var_7 = 998999917;
unsigned char var_14 = (unsigned char)78;
int zero = 0;
unsigned long long int var_15 = 12870586577717604852ULL;
unsigned short var_16 = (unsigned short)44889;
unsigned char var_17 = (unsigned char)141;
short var_18 = (short)-18737;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
