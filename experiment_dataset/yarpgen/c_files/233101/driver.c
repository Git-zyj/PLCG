#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -7298055050613318700LL;
unsigned int var_3 = 1168659201U;
int var_6 = -602349073;
long long int var_7 = -7316531509146013306LL;
int zero = 0;
signed char var_11 = (signed char)-90;
unsigned char var_12 = (unsigned char)35;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
