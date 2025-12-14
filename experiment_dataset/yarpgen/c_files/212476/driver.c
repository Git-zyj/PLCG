#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)82;
signed char var_4 = (signed char)-58;
unsigned char var_6 = (unsigned char)69;
signed char var_11 = (signed char)52;
unsigned char var_13 = (unsigned char)3;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)241;
signed char var_21 = (signed char)-15;
int var_22 = -1817178715;
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
