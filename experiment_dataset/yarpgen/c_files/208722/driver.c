#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12255;
unsigned long long int var_3 = 14746913317828462170ULL;
unsigned char var_4 = (unsigned char)85;
unsigned long long int var_5 = 6727125847225251942ULL;
unsigned short var_6 = (unsigned short)13422;
unsigned short var_7 = (unsigned short)7574;
int zero = 0;
signed char var_12 = (signed char)17;
long long int var_13 = 7009296156710689210LL;
void init() {
}

void checksum() {
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
