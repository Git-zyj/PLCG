#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)132;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)8579;
unsigned char var_6 = (unsigned char)234;
unsigned int var_8 = 1715174028U;
unsigned int var_9 = 3067234447U;
unsigned short var_10 = (unsigned short)33874;
unsigned int var_13 = 1064809960U;
signed char var_14 = (signed char)-102;
unsigned long long int var_17 = 5083772178772101627ULL;
int zero = 0;
unsigned int var_18 = 1327264043U;
unsigned short var_19 = (unsigned short)42611;
unsigned char var_20 = (unsigned char)242;
signed char var_21 = (signed char)25;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
