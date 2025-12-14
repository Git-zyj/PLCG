#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-105;
unsigned char var_4 = (unsigned char)23;
unsigned short var_5 = (unsigned short)14376;
unsigned short var_6 = (unsigned short)10130;
long long int var_7 = 6579899557429854332LL;
int zero = 0;
signed char var_11 = (signed char)127;
signed char var_12 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
