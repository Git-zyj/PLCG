#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32571;
unsigned char var_2 = (unsigned char)32;
_Bool var_3 = (_Bool)0;
long long int var_4 = -673070081395007811LL;
short var_6 = (short)10954;
unsigned long long int var_12 = 12889439552263586621ULL;
signed char var_14 = (signed char)-108;
unsigned short var_15 = (unsigned short)57422;
unsigned char var_16 = (unsigned char)21;
unsigned char var_18 = (unsigned char)40;
int zero = 0;
short var_19 = (short)7188;
unsigned short var_20 = (unsigned short)3999;
void init() {
}

void checksum() {
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
