#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-113;
unsigned char var_6 = (unsigned char)42;
unsigned short var_7 = (unsigned short)4206;
unsigned long long int var_8 = 11535489796069546985ULL;
signed char var_13 = (signed char)-51;
unsigned short var_17 = (unsigned short)62615;
int zero = 0;
unsigned char var_20 = (unsigned char)176;
short var_21 = (short)2185;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 727125334U;
signed char var_24 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
