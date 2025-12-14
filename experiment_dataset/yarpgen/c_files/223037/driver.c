#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1829557092;
unsigned char var_1 = (unsigned char)54;
signed char var_2 = (signed char)-121;
int var_3 = 1998835463;
unsigned long long int var_6 = 15756286785539001669ULL;
unsigned short var_7 = (unsigned short)6866;
long long int var_10 = 1224329352066871230LL;
int zero = 0;
int var_11 = -1434667441;
unsigned char var_12 = (unsigned char)226;
short var_13 = (short)-1903;
unsigned char var_14 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
