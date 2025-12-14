#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)45554;
short var_5 = (short)-6049;
long long int var_6 = -947046215735725637LL;
unsigned char var_10 = (unsigned char)176;
short var_11 = (short)16529;
int var_13 = -418028128;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)213;
long long int var_16 = -1767602769383747918LL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)25492;
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
