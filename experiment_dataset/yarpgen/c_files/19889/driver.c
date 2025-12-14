#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)246;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-85;
short var_3 = (short)15017;
unsigned char var_4 = (unsigned char)238;
unsigned long long int var_5 = 10973026198417882161ULL;
int var_6 = 1399119861;
unsigned short var_8 = (unsigned short)52282;
unsigned int var_9 = 677092885U;
int zero = 0;
unsigned char var_10 = (unsigned char)179;
unsigned short var_11 = (unsigned short)8179;
int var_12 = -1346765207;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
