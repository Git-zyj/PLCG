#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26358;
unsigned short var_1 = (unsigned short)42758;
unsigned char var_2 = (unsigned char)244;
unsigned char var_5 = (unsigned char)147;
signed char var_7 = (signed char)106;
short var_9 = (short)10808;
short var_10 = (short)17725;
unsigned char var_12 = (unsigned char)15;
int zero = 0;
long long int var_19 = -7798147095846905863LL;
unsigned char var_20 = (unsigned char)151;
unsigned short var_21 = (unsigned short)35002;
void init() {
}

void checksum() {
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
