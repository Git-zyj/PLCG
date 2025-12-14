#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)31309;
long long int var_3 = -1954319506925631703LL;
unsigned short var_5 = (unsigned short)8282;
unsigned int var_7 = 3425886476U;
unsigned short var_8 = (unsigned short)5572;
unsigned int var_10 = 1014799246U;
unsigned short var_14 = (unsigned short)10567;
int zero = 0;
unsigned short var_16 = (unsigned short)52898;
unsigned short var_17 = (unsigned short)61604;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
