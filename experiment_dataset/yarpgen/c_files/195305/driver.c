#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)213;
unsigned int var_3 = 2170729106U;
short var_6 = (short)32118;
unsigned short var_9 = (unsigned short)566;
unsigned char var_13 = (unsigned char)139;
unsigned char var_14 = (unsigned char)148;
int var_16 = 132992080;
unsigned char var_18 = (unsigned char)151;
int zero = 0;
long long int var_19 = 2825311148258661198LL;
int var_20 = -1224286193;
unsigned int var_21 = 507214711U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
