#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
unsigned short var_5 = (unsigned short)4444;
unsigned short var_10 = (unsigned short)11221;
int zero = 0;
unsigned long long int var_19 = 14635978261760065821ULL;
unsigned short var_20 = (unsigned short)57012;
unsigned short var_21 = (unsigned short)6292;
unsigned char var_22 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
