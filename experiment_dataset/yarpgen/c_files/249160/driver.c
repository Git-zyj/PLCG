#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)152;
unsigned short var_6 = (unsigned short)52956;
_Bool var_8 = (_Bool)0;
short var_10 = (short)-480;
int zero = 0;
unsigned long long int var_15 = 4672998835872121517ULL;
unsigned long long int var_16 = 6869002349519153937ULL;
signed char var_17 = (signed char)-98;
unsigned char var_18 = (unsigned char)43;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
