#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)46462;
signed char var_5 = (signed char)12;
signed char var_6 = (signed char)-24;
unsigned short var_8 = (unsigned short)18104;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)63523;
unsigned short var_13 = (unsigned short)46202;
_Bool var_14 = (_Bool)0;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)68;
unsigned char var_21 = (unsigned char)52;
unsigned char var_22 = (unsigned char)15;
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
