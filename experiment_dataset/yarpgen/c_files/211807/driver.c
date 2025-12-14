#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
unsigned short var_4 = (unsigned short)51085;
short var_5 = (short)-29074;
signed char var_6 = (signed char)-115;
unsigned int var_7 = 982648370U;
short var_8 = (short)4269;
unsigned short var_9 = (unsigned short)33529;
short var_10 = (short)-15081;
unsigned char var_11 = (unsigned char)195;
int zero = 0;
int var_12 = 404755417;
unsigned int var_13 = 2282813901U;
unsigned short var_14 = (unsigned short)53465;
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
