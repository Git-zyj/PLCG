#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1011507750U;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)45963;
signed char var_5 = (signed char)-47;
unsigned char var_8 = (unsigned char)7;
signed char var_13 = (signed char)23;
short var_15 = (short)25428;
unsigned int var_19 = 3470073381U;
int zero = 0;
long long int var_20 = 7785506260810639041LL;
signed char var_21 = (signed char)20;
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
