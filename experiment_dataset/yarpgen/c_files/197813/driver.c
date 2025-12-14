#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2489449515998640244ULL;
unsigned short var_3 = (unsigned short)14545;
long long int var_4 = 8087208570871198006LL;
int zero = 0;
short var_17 = (short)-25747;
signed char var_18 = (signed char)127;
unsigned int var_19 = 245841113U;
unsigned char var_20 = (unsigned char)211;
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
