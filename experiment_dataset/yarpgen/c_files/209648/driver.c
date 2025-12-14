#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)8;
int var_1 = 1046185983;
unsigned int var_3 = 1226258285U;
unsigned char var_4 = (unsigned char)135;
unsigned char var_10 = (unsigned char)56;
signed char var_12 = (signed char)-54;
int zero = 0;
signed char var_14 = (signed char)-80;
long long int var_15 = 7101013418437769989LL;
unsigned long long int var_16 = 7264396051233535078ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
