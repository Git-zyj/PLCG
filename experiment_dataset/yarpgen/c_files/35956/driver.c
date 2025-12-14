#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7674587096861096013LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 13425722864007637359ULL;
unsigned short var_6 = (unsigned short)52580;
unsigned char var_8 = (unsigned char)205;
long long int var_9 = 1537773537985605970LL;
short var_10 = (short)-19889;
unsigned short var_13 = (unsigned short)44016;
int zero = 0;
unsigned int var_20 = 3135801605U;
unsigned int var_21 = 1645098699U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
