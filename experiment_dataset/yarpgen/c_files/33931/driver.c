#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)39618;
long long int var_12 = -2229934306627567569LL;
unsigned short var_15 = (unsigned short)40122;
int zero = 0;
unsigned char var_16 = (unsigned char)156;
unsigned char var_17 = (unsigned char)165;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
