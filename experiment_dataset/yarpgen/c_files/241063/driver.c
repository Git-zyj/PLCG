#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
unsigned long long int var_1 = 18177982316666515072ULL;
unsigned short var_2 = (unsigned short)13547;
short var_3 = (short)-3937;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
int var_7 = 2048718999;
signed char var_9 = (signed char)15;
signed char var_11 = (signed char)118;
long long int var_12 = -3331387882371353096LL;
long long int var_13 = 7785531787953229853LL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 4093733914U;
unsigned int var_16 = 2335293603U;
unsigned short var_17 = (unsigned short)45790;
signed char var_18 = (signed char)121;
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
