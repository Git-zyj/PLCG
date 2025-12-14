#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-87;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 3018281063U;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)20136;
int zero = 0;
unsigned int var_12 = 1337205443U;
unsigned short var_13 = (unsigned short)62464;
void init() {
}

void checksum() {
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
