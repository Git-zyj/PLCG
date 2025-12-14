#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)10;
long long int var_11 = -517025265043068830LL;
unsigned short var_14 = (unsigned short)59980;
int zero = 0;
unsigned short var_17 = (unsigned short)63118;
short var_18 = (short)14066;
short var_19 = (short)8943;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
