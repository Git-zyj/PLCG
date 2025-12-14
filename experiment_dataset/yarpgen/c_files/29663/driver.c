#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)218;
signed char var_1 = (signed char)-78;
signed char var_3 = (signed char)-80;
unsigned long long int var_5 = 14672175377237127414ULL;
signed char var_7 = (signed char)-54;
unsigned long long int var_11 = 4115597432390753584ULL;
unsigned short var_14 = (unsigned short)1588;
int zero = 0;
int var_16 = 1810754313;
signed char var_17 = (signed char)27;
void init() {
}

void checksum() {
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
