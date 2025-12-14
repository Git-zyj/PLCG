#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54274;
signed char var_3 = (signed char)0;
signed char var_5 = (signed char)-105;
unsigned short var_6 = (unsigned short)33125;
unsigned short var_7 = (unsigned short)8583;
unsigned long long int var_13 = 11777028842084246530ULL;
int zero = 0;
long long int var_14 = -2496275736098633038LL;
unsigned short var_15 = (unsigned short)34040;
unsigned short var_16 = (unsigned short)31173;
unsigned long long int var_17 = 17687248083004079201ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
