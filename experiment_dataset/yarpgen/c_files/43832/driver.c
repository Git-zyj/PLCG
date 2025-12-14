#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3607221128877872472LL;
unsigned short var_6 = (unsigned short)52588;
unsigned char var_9 = (unsigned char)42;
int zero = 0;
long long int var_10 = 8834467322978472866LL;
unsigned long long int var_11 = 9544348501880133319ULL;
unsigned char var_12 = (unsigned char)78;
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
