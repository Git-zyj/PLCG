#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3216;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)81;
unsigned char var_6 = (unsigned char)234;
unsigned short var_9 = (unsigned short)62797;
int var_10 = 1070265357;
int var_14 = -1425409902;
unsigned short var_15 = (unsigned short)39645;
int zero = 0;
unsigned char var_18 = (unsigned char)75;
signed char var_19 = (signed char)-52;
short var_20 = (short)25660;
signed char var_21 = (signed char)-59;
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
