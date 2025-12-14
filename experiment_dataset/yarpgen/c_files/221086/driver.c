#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10133754518077511354ULL;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-107;
unsigned int var_5 = 3852759595U;
signed char var_6 = (signed char)29;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)73;
unsigned short var_9 = (unsigned short)41440;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)204;
signed char var_13 = (signed char)-99;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2903767770U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
