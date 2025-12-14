#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
unsigned short var_7 = (unsigned short)39632;
unsigned long long int var_11 = 13570089725890286951ULL;
int zero = 0;
unsigned long long int var_16 = 1339368820322710350ULL;
unsigned long long int var_17 = 3264499596437643447ULL;
unsigned char var_18 = (unsigned char)134;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
