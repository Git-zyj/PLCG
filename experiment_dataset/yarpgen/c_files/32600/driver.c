#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
unsigned char var_3 = (unsigned char)106;
signed char var_4 = (signed char)-2;
unsigned int var_8 = 1957871410U;
unsigned short var_9 = (unsigned short)6497;
signed char var_10 = (signed char)117;
short var_12 = (short)-15123;
int zero = 0;
int var_13 = 2076350713;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
