#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)27;
signed char var_4 = (signed char)-24;
unsigned int var_6 = 4200399545U;
signed char var_11 = (signed char)62;
unsigned char var_12 = (unsigned char)4;
int zero = 0;
signed char var_19 = (signed char)36;
_Bool var_20 = (_Bool)0;
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
