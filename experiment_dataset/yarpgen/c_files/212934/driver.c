#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12741;
unsigned char var_3 = (unsigned char)123;
unsigned int var_7 = 1379047916U;
unsigned long long int var_10 = 827857417353552449ULL;
signed char var_13 = (signed char)-23;
short var_15 = (short)11456;
int zero = 0;
signed char var_16 = (signed char)-5;
long long int var_17 = 7572880692939572294LL;
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
