#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)42042;
int var_6 = -1232994247;
unsigned long long int var_9 = 7579847952148960411ULL;
long long int var_12 = -3363117512102619925LL;
long long int var_14 = 3826807976290667297LL;
int zero = 0;
short var_19 = (short)-24706;
unsigned short var_20 = (unsigned short)53635;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
