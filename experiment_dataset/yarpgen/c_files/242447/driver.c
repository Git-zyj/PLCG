#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11848412232307436351ULL;
unsigned int var_4 = 2999202915U;
unsigned char var_7 = (unsigned char)180;
unsigned short var_10 = (unsigned short)52701;
int zero = 0;
unsigned long long int var_12 = 17386630982422414912ULL;
unsigned short var_13 = (unsigned short)15562;
_Bool var_14 = (_Bool)1;
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
