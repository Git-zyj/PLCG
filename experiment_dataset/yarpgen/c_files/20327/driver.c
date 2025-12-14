#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
_Bool var_1 = (_Bool)0;
unsigned int var_6 = 2684784607U;
signed char var_7 = (signed char)-77;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)219;
unsigned char var_11 = (unsigned char)66;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)36549;
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
