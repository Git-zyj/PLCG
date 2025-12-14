#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11351;
unsigned char var_3 = (unsigned char)81;
unsigned short var_4 = (unsigned short)60616;
unsigned char var_5 = (unsigned char)17;
unsigned char var_7 = (unsigned char)196;
unsigned short var_10 = (unsigned short)20582;
unsigned short var_12 = (unsigned short)45153;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)60572;
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
