#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32265;
short var_3 = (short)-27249;
unsigned char var_4 = (unsigned char)142;
unsigned char var_6 = (unsigned char)182;
int var_10 = -246150788;
int zero = 0;
unsigned short var_11 = (unsigned short)15587;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
