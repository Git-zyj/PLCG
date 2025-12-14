#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57584;
unsigned char var_4 = (unsigned char)33;
unsigned short var_5 = (unsigned short)16681;
unsigned char var_9 = (unsigned char)228;
unsigned short var_11 = (unsigned short)16169;
signed char var_15 = (signed char)-24;
short var_17 = (short)11266;
unsigned int var_18 = 226473685U;
int zero = 0;
short var_19 = (short)21618;
unsigned short var_20 = (unsigned short)52593;
signed char var_21 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
