#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-2926;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-93;
short var_7 = (short)8738;
int var_9 = 2039372695;
unsigned char var_10 = (unsigned char)76;
int var_18 = -695575791;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)12550;
signed char var_21 = (signed char)120;
void init() {
}

void checksum() {
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
