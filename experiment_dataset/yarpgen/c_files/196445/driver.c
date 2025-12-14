#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
unsigned short var_2 = (unsigned short)61176;
signed char var_5 = (signed char)73;
signed char var_8 = (signed char)-86;
long long int var_9 = -4660189738687849548LL;
int zero = 0;
signed char var_18 = (signed char)-84;
signed char var_19 = (signed char)-45;
unsigned int var_20 = 2996327603U;
long long int var_21 = -8904749836640493835LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
