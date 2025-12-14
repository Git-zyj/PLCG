#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)111;
_Bool var_6 = (_Bool)0;
int var_7 = 667386402;
int var_8 = 2050529987;
int zero = 0;
signed char var_10 = (signed char)-40;
unsigned short var_11 = (unsigned short)4110;
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
