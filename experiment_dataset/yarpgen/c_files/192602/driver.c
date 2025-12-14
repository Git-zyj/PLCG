#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-126;
unsigned char var_1 = (unsigned char)66;
int var_5 = -1057843510;
int var_6 = 2077005764;
unsigned long long int var_11 = 12354834292086430452ULL;
unsigned char var_13 = (unsigned char)87;
int zero = 0;
unsigned char var_16 = (unsigned char)129;
unsigned long long int var_17 = 17538292368368482168ULL;
unsigned short var_18 = (unsigned short)23888;
long long int var_19 = -798953621030886192LL;
unsigned short var_20 = (unsigned short)55838;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
