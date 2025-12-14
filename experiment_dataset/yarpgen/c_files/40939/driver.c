#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23790;
_Bool var_1 = (_Bool)1;
long long int var_3 = 7156689656132735758LL;
unsigned short var_4 = (unsigned short)6210;
signed char var_5 = (signed char)-60;
unsigned char var_6 = (unsigned char)16;
signed char var_8 = (signed char)29;
int zero = 0;
long long int var_11 = -7592821214629151743LL;
unsigned short var_12 = (unsigned short)43864;
_Bool var_13 = (_Bool)1;
short var_14 = (short)13324;
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
