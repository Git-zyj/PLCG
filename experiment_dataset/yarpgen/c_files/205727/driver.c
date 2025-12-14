#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10402;
unsigned int var_2 = 3599097984U;
unsigned short var_4 = (unsigned short)52097;
signed char var_5 = (signed char)-52;
unsigned int var_6 = 2411230300U;
_Bool var_7 = (_Bool)0;
unsigned char var_10 = (unsigned char)108;
signed char var_15 = (signed char)-93;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-14;
signed char var_20 = (signed char)49;
signed char var_21 = (signed char)96;
signed char var_22 = (signed char)62;
void init() {
}

void checksum() {
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
