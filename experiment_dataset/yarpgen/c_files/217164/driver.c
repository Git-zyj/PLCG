#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1378317604550606182LL;
short var_3 = (short)-23796;
signed char var_5 = (signed char)-41;
int var_7 = 1900092244;
short var_12 = (short)-11239;
int zero = 0;
unsigned short var_14 = (unsigned short)62519;
long long int var_15 = -5094488072525613562LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
