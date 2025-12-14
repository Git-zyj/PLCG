#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)207;
short var_5 = (short)30540;
short var_7 = (short)-5035;
_Bool var_15 = (_Bool)0;
unsigned char var_17 = (unsigned char)11;
int zero = 0;
unsigned short var_18 = (unsigned short)34704;
int var_19 = -1288182055;
void init() {
}

void checksum() {
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
