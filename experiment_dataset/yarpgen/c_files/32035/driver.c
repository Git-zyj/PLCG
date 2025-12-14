#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 209089502U;
unsigned short var_2 = (unsigned short)10739;
unsigned char var_3 = (unsigned char)165;
signed char var_6 = (signed char)-21;
signed char var_7 = (signed char)89;
signed char var_9 = (signed char)31;
unsigned char var_10 = (unsigned char)175;
unsigned long long int var_12 = 14270365636032804573ULL;
unsigned char var_13 = (unsigned char)72;
int zero = 0;
unsigned char var_15 = (unsigned char)96;
short var_16 = (short)-29864;
int var_17 = -458118744;
long long int var_18 = 8868366763482918942LL;
short var_19 = (short)-22496;
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
