#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)21;
unsigned short var_8 = (unsigned short)17753;
unsigned char var_11 = (unsigned char)128;
signed char var_13 = (signed char)-113;
int zero = 0;
short var_14 = (short)19334;
long long int var_15 = -1383860346334231951LL;
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
