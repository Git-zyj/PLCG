#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)224;
long long int var_2 = 7890390169708169240LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_19 = 1829091647;
unsigned short var_20 = (unsigned short)34126;
unsigned int var_21 = 3111904142U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
