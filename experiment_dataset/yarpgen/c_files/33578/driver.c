#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 730716239;
int var_3 = 1175848932;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)45;
signed char var_10 = (signed char)-54;
int var_13 = 18082210;
long long int var_15 = 4930601184719146542LL;
unsigned char var_18 = (unsigned char)155;
int zero = 0;
unsigned char var_19 = (unsigned char)246;
unsigned char var_20 = (unsigned char)191;
unsigned char var_21 = (unsigned char)103;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
