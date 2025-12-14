#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1314046155;
signed char var_2 = (signed char)126;
unsigned short var_3 = (unsigned short)57888;
signed char var_7 = (signed char)68;
unsigned char var_11 = (unsigned char)211;
int var_13 = 607424215;
unsigned long long int var_14 = 10376708566831537057ULL;
unsigned short var_16 = (unsigned short)13439;
unsigned char var_17 = (unsigned char)120;
int zero = 0;
unsigned int var_19 = 1777477687U;
unsigned int var_20 = 1191837617U;
void init() {
}

void checksum() {
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
