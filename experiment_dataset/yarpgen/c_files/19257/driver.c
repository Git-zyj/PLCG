#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 9933008928589370425ULL;
short var_4 = (short)12687;
unsigned int var_6 = 2166305487U;
signed char var_11 = (signed char)-54;
int zero = 0;
unsigned char var_12 = (unsigned char)52;
unsigned short var_13 = (unsigned short)14132;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
