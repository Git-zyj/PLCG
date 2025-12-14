#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 753056835042404409LL;
unsigned int var_2 = 3606546866U;
_Bool var_5 = (_Bool)0;
unsigned char var_8 = (unsigned char)246;
unsigned short var_9 = (unsigned short)32167;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-5278;
short var_12 = (short)32167;
int zero = 0;
signed char var_15 = (signed char)100;
unsigned short var_16 = (unsigned short)62322;
int var_17 = 1564829678;
unsigned char var_18 = (unsigned char)183;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
