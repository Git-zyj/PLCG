#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)176;
unsigned long long int var_7 = 15965880752808271029ULL;
unsigned int var_8 = 3881175784U;
int zero = 0;
unsigned int var_11 = 3151489748U;
unsigned short var_12 = (unsigned short)52321;
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
