#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)892;
short var_3 = (short)10793;
unsigned char var_4 = (unsigned char)26;
unsigned short var_10 = (unsigned short)50421;
int zero = 0;
long long int var_13 = -3004395907944013339LL;
unsigned char var_14 = (unsigned char)207;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
