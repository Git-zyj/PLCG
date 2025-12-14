#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2058469077;
long long int var_3 = -7663557643260501635LL;
signed char var_4 = (signed char)61;
unsigned short var_6 = (unsigned short)3407;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_13 = (short)15819;
signed char var_14 = (signed char)-80;
unsigned char var_15 = (unsigned char)54;
unsigned long long int var_16 = 14403824713557584310ULL;
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
