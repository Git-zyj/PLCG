#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)108;
signed char var_1 = (signed char)-97;
signed char var_3 = (signed char)65;
signed char var_4 = (signed char)81;
int var_5 = 134176774;
int var_6 = -1068851245;
int var_7 = -1272984163;
unsigned long long int var_8 = 15582117700276909439ULL;
unsigned short var_9 = (unsigned short)19336;
unsigned char var_10 = (unsigned char)242;
unsigned char var_12 = (unsigned char)72;
int zero = 0;
short var_13 = (short)13329;
short var_14 = (short)-11349;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)62;
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
