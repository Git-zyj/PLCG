#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 214249696;
unsigned short var_4 = (unsigned short)13470;
unsigned char var_5 = (unsigned char)186;
unsigned char var_6 = (unsigned char)208;
unsigned int var_8 = 4211936562U;
unsigned short var_10 = (unsigned short)12790;
long long int var_12 = 388361591227726436LL;
int zero = 0;
unsigned char var_13 = (unsigned char)16;
unsigned int var_14 = 305882776U;
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
