#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 764472194;
unsigned short var_1 = (unsigned short)38170;
unsigned short var_2 = (unsigned short)62753;
unsigned char var_3 = (unsigned char)120;
unsigned char var_4 = (unsigned char)125;
unsigned short var_5 = (unsigned short)63;
long long int var_6 = 957865836251983942LL;
unsigned long long int var_8 = 5266790400907895437ULL;
unsigned char var_10 = (unsigned char)67;
unsigned char var_12 = (unsigned char)23;
int zero = 0;
unsigned char var_13 = (unsigned char)60;
int var_14 = 475523601;
unsigned char var_15 = (unsigned char)63;
unsigned short var_16 = (unsigned short)65036;
void init() {
}

void checksum() {
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
