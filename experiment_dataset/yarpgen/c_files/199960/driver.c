#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1283385625059510774ULL;
signed char var_6 = (signed char)40;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_11 = (unsigned char)221;
short var_12 = (short)1082;
unsigned short var_13 = (unsigned short)63818;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
