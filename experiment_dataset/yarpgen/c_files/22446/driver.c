#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18861;
short var_3 = (short)20082;
unsigned short var_4 = (unsigned short)31375;
unsigned short var_7 = (unsigned short)57016;
signed char var_11 = (signed char)-97;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = 7555408933463580539LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)216;
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
