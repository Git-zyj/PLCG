#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-38;
_Bool var_2 = (_Bool)1;
int var_7 = 1839399916;
long long int var_8 = -5766736367976668488LL;
long long int var_10 = -1108997775465082554LL;
long long int var_11 = 969302084492260222LL;
int var_14 = 917426945;
int zero = 0;
signed char var_15 = (signed char)-87;
unsigned short var_16 = (unsigned short)2938;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
