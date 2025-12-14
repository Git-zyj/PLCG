#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)156;
unsigned short var_3 = (unsigned short)765;
unsigned char var_4 = (unsigned char)38;
signed char var_7 = (signed char)-121;
unsigned short var_9 = (unsigned short)61849;
int zero = 0;
long long int var_10 = -2187207746607011225LL;
unsigned char var_11 = (unsigned char)70;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
