#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-13;
unsigned int var_1 = 2350811346U;
signed char var_2 = (signed char)-75;
signed char var_3 = (signed char)78;
_Bool var_4 = (_Bool)1;
int var_5 = 2109948572;
signed char var_6 = (signed char)-117;
short var_7 = (short)-12553;
signed char var_9 = (signed char)-90;
short var_10 = (short)1649;
unsigned int var_11 = 1749059098U;
int zero = 0;
unsigned int var_12 = 2459732068U;
unsigned short var_13 = (unsigned short)6590;
short var_14 = (short)-29285;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
