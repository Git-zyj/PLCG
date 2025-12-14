#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)170;
int var_5 = -1826507088;
unsigned short var_10 = (unsigned short)17467;
int zero = 0;
unsigned int var_15 = 2475843118U;
signed char var_16 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
