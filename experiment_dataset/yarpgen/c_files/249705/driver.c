#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)162;
unsigned char var_6 = (unsigned char)21;
signed char var_7 = (signed char)10;
long long int var_11 = -215504765085404278LL;
signed char var_12 = (signed char)38;
unsigned char var_13 = (unsigned char)242;
long long int var_17 = 6063976063484552067LL;
int zero = 0;
signed char var_18 = (signed char)-56;
signed char var_19 = (signed char)52;
signed char var_20 = (signed char)11;
unsigned int var_21 = 1714055498U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
