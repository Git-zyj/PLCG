#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 1091861322198770630LL;
unsigned short var_3 = (unsigned short)47155;
unsigned char var_5 = (unsigned char)3;
unsigned short var_7 = (unsigned short)10728;
unsigned int var_8 = 3327889802U;
int var_10 = -2070210031;
short var_11 = (short)21001;
unsigned short var_13 = (unsigned short)21183;
int zero = 0;
short var_15 = (short)-27942;
signed char var_16 = (signed char)-69;
unsigned long long int var_17 = 7843683341656912109ULL;
signed char var_18 = (signed char)70;
unsigned short var_19 = (unsigned short)21907;
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
