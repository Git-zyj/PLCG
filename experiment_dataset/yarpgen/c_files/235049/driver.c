#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 807520328;
unsigned char var_2 = (unsigned char)125;
unsigned short var_3 = (unsigned short)49411;
unsigned short var_4 = (unsigned short)53289;
unsigned long long int var_5 = 14339154380951634136ULL;
unsigned char var_7 = (unsigned char)129;
int zero = 0;
short var_12 = (short)-25054;
unsigned long long int var_13 = 7005385126852150817ULL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 4257770391308664608LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
