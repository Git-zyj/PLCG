#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22151;
unsigned int var_6 = 1210408642U;
short var_8 = (short)16316;
unsigned char var_11 = (unsigned char)118;
unsigned short var_12 = (unsigned short)34868;
int zero = 0;
unsigned char var_13 = (unsigned char)6;
unsigned short var_14 = (unsigned short)50982;
long long int var_15 = 2993331952721530709LL;
int var_16 = 1999524928;
void init() {
}

void checksum() {
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
