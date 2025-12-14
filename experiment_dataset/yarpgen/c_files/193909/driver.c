#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)85;
unsigned short var_6 = (unsigned short)60286;
short var_8 = (short)10042;
short var_10 = (short)10423;
unsigned int var_12 = 4077005507U;
short var_15 = (short)-26131;
int zero = 0;
unsigned char var_17 = (unsigned char)147;
long long int var_18 = 80527002945001074LL;
void init() {
}

void checksum() {
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
