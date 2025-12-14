#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3344575514U;
signed char var_3 = (signed char)-97;
unsigned long long int var_5 = 15123806275204103058ULL;
unsigned char var_7 = (unsigned char)59;
unsigned char var_8 = (unsigned char)105;
short var_9 = (short)6714;
int zero = 0;
unsigned long long int var_10 = 15903256107858891088ULL;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)6;
short var_13 = (short)8418;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
