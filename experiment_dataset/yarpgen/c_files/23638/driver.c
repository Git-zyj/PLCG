#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55732;
unsigned long long int var_2 = 5670425179440837197ULL;
signed char var_4 = (signed char)-99;
unsigned long long int var_7 = 11608896401308916417ULL;
signed char var_8 = (signed char)16;
int zero = 0;
short var_11 = (short)-3268;
long long int var_12 = 5812689976221870827LL;
unsigned char var_13 = (unsigned char)106;
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
