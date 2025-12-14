#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1330516391;
_Bool var_2 = (_Bool)1;
short var_4 = (short)27868;
signed char var_6 = (signed char)33;
unsigned char var_8 = (unsigned char)241;
long long int var_11 = 1330825551452218491LL;
int zero = 0;
unsigned char var_12 = (unsigned char)27;
unsigned short var_13 = (unsigned short)17845;
long long int var_14 = 1599000983324536068LL;
int var_15 = -1875382694;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
