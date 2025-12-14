#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)121;
unsigned short var_9 = (unsigned short)56355;
unsigned char var_10 = (unsigned char)132;
_Bool var_11 = (_Bool)0;
short var_14 = (short)7909;
int zero = 0;
short var_16 = (short)314;
unsigned char var_17 = (unsigned char)122;
int var_18 = -1501343777;
short var_19 = (short)27865;
void init() {
}

void checksum() {
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
