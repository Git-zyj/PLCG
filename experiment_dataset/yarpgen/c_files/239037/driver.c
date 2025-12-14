#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
short var_1 = (short)15077;
signed char var_3 = (signed char)127;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)201;
short var_10 = (short)24879;
int zero = 0;
unsigned long long int var_13 = 11819764070160749232ULL;
unsigned short var_14 = (unsigned short)41329;
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
