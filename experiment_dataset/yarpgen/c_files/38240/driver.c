#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
unsigned char var_3 = (unsigned char)71;
unsigned int var_6 = 2652795209U;
int var_9 = -1082964871;
unsigned int var_12 = 107090939U;
signed char var_14 = (signed char)-61;
signed char var_16 = (signed char)-3;
unsigned int var_18 = 251773578U;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-34;
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
