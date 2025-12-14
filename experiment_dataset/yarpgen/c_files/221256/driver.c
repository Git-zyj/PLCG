#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
unsigned long long int var_3 = 5023791873239035508ULL;
short var_5 = (short)-6886;
_Bool var_6 = (_Bool)1;
int var_8 = 49612321;
unsigned short var_10 = (unsigned short)8304;
int zero = 0;
int var_11 = 1179543110;
short var_12 = (short)-19420;
void init() {
}

void checksum() {
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
