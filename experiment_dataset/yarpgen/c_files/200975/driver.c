#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6626253868409204292ULL;
unsigned char var_3 = (unsigned char)242;
signed char var_4 = (signed char)-109;
signed char var_5 = (signed char)65;
unsigned char var_7 = (unsigned char)152;
int zero = 0;
unsigned long long int var_10 = 4469363775008026209ULL;
_Bool var_11 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
