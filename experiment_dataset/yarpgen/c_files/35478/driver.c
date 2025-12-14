#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6414295184996486568ULL;
unsigned short var_4 = (unsigned short)57761;
unsigned int var_5 = 3586509366U;
unsigned int var_9 = 571118507U;
unsigned int var_13 = 1111053681U;
int zero = 0;
int var_14 = 1085218460;
_Bool var_15 = (_Bool)1;
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
