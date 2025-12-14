#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
_Bool var_1 = (_Bool)0;
short var_3 = (short)-9837;
signed char var_5 = (signed char)61;
unsigned char var_8 = (unsigned char)230;
long long int var_10 = 943800103128683280LL;
int zero = 0;
unsigned short var_12 = (unsigned short)35572;
unsigned int var_13 = 3955501623U;
void init() {
}

void checksum() {
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
