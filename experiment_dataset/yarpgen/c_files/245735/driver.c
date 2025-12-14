#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4690238831309335331LL;
unsigned char var_3 = (unsigned char)31;
signed char var_4 = (signed char)57;
short var_5 = (short)16353;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)19212;
unsigned short var_9 = (unsigned short)14078;
int zero = 0;
unsigned char var_10 = (unsigned char)190;
int var_11 = -2129576953;
short var_12 = (short)-27264;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
