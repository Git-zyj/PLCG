#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1146099219380333571ULL;
unsigned short var_6 = (unsigned short)26203;
signed char var_7 = (signed char)-61;
unsigned char var_8 = (unsigned char)121;
unsigned short var_11 = (unsigned short)37862;
int zero = 0;
unsigned short var_14 = (unsigned short)36364;
unsigned char var_15 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
