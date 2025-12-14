#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)31651;
unsigned char var_3 = (unsigned char)53;
short var_4 = (short)-10193;
short var_5 = (short)6149;
unsigned int var_6 = 4186638828U;
signed char var_7 = (signed char)-125;
unsigned char var_8 = (unsigned char)102;
unsigned char var_9 = (unsigned char)92;
int zero = 0;
int var_10 = 1760418283;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
