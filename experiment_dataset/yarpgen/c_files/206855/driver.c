#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-6389;
signed char var_2 = (signed char)-90;
long long int var_3 = -8097347665539808121LL;
unsigned char var_5 = (unsigned char)210;
unsigned char var_6 = (unsigned char)154;
unsigned char var_7 = (unsigned char)51;
signed char var_9 = (signed char)67;
int var_10 = -768163343;
int var_11 = 842766915;
_Bool var_12 = (_Bool)1;
unsigned int var_15 = 810441018U;
long long int var_16 = -602621856528278241LL;
unsigned short var_17 = (unsigned short)46441;
int zero = 0;
unsigned short var_18 = (unsigned short)7254;
unsigned char var_19 = (unsigned char)101;
long long int var_20 = -4577229394879041830LL;
unsigned int var_21 = 1438005073U;
unsigned char var_22 = (unsigned char)176;
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
