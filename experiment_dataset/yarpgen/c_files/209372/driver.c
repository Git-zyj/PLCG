#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11636;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-26058;
short var_4 = (short)30856;
unsigned long long int var_5 = 18313587329118991538ULL;
long long int var_6 = -8676137493520384195LL;
unsigned char var_7 = (unsigned char)181;
unsigned long long int var_8 = 1281457152425387185ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)62;
unsigned short var_11 = (unsigned short)14818;
unsigned char var_12 = (unsigned char)164;
int zero = 0;
unsigned short var_13 = (unsigned short)41236;
signed char var_14 = (signed char)101;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
