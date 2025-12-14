#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26791;
unsigned char var_4 = (unsigned char)95;
unsigned int var_5 = 1642987227U;
unsigned short var_16 = (unsigned short)285;
signed char var_17 = (signed char)-105;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)75;
int var_22 = -1301929473;
unsigned char var_23 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
