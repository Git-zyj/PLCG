#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3234041254U;
unsigned long long int var_1 = 8183787722710576070ULL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-7685;
int zero = 0;
unsigned char var_12 = (unsigned char)201;
unsigned long long int var_13 = 16925251955349223259ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
