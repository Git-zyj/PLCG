#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15927;
long long int var_2 = 1860267413855943294LL;
unsigned char var_3 = (unsigned char)203;
unsigned long long int var_5 = 12192401073601524541ULL;
unsigned char var_6 = (unsigned char)184;
short var_11 = (short)-5542;
short var_17 = (short)9242;
int zero = 0;
short var_18 = (short)-3814;
unsigned int var_19 = 1288759941U;
int var_20 = -1498981252;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
