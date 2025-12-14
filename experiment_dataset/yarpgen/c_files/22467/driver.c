#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)11717;
unsigned short var_10 = (unsigned short)17234;
unsigned short var_11 = (unsigned short)11550;
signed char var_19 = (signed char)54;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)123;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
