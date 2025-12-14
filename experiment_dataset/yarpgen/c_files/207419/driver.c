#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14148;
unsigned char var_2 = (unsigned char)82;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)80;
unsigned short var_11 = (unsigned short)27860;
unsigned int var_13 = 2802840937U;
signed char var_15 = (signed char)-43;
int zero = 0;
short var_17 = (short)4030;
signed char var_18 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
