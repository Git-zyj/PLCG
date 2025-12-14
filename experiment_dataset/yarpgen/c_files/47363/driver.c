#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)24;
unsigned long long int var_3 = 9002398767843061222ULL;
unsigned int var_6 = 4170467815U;
short var_7 = (short)6310;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)195;
int var_14 = -1552827267;
signed char var_15 = (signed char)77;
unsigned long long int var_16 = 2141695623391698869ULL;
unsigned char var_17 = (unsigned char)146;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
