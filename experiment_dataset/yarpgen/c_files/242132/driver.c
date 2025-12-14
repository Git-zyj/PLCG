#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)6;
unsigned char var_2 = (unsigned char)97;
short var_3 = (short)1001;
_Bool var_10 = (_Bool)1;
short var_13 = (short)19518;
unsigned long long int var_14 = 3201383536951924468ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)56259;
unsigned char var_21 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
