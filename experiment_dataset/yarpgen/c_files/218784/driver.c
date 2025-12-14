#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -242098804906060552LL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-107;
unsigned int var_7 = 1532652240U;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)240;
int zero = 0;
short var_12 = (short)-10343;
unsigned char var_13 = (unsigned char)66;
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
