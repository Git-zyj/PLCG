#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)10;
unsigned long long int var_2 = 14638757957829477937ULL;
long long int var_5 = 3344110726069821977LL;
unsigned short var_7 = (unsigned short)21993;
short var_8 = (short)-6578;
long long int var_10 = 8410984264926205810LL;
int zero = 0;
long long int var_12 = -3802240451721525772LL;
long long int var_13 = 4558966656139955309LL;
int var_14 = 1038336093;
signed char var_15 = (signed char)106;
int var_16 = -1860741823;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
