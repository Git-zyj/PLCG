#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9192041717252310955ULL;
unsigned int var_1 = 3263875077U;
unsigned long long int var_6 = 14915173456373524559ULL;
unsigned int var_10 = 3025467200U;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 7076845412053467081ULL;
short var_13 = (short)-6991;
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
