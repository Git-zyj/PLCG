#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61662;
unsigned char var_7 = (unsigned char)4;
unsigned int var_10 = 2589241747U;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned int var_19 = 2742988331U;
signed char var_20 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
