#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3237877127U;
unsigned int var_3 = 2942640874U;
_Bool var_5 = (_Bool)0;
short var_6 = (short)27658;
int var_9 = 2097298859;
int zero = 0;
unsigned int var_12 = 3631875925U;
unsigned char var_13 = (unsigned char)190;
unsigned short var_14 = (unsigned short)60820;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
