#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)106;
signed char var_3 = (signed char)-53;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)103;
unsigned char var_8 = (unsigned char)225;
long long int var_9 = 8229379768694622061LL;
int zero = 0;
unsigned char var_11 = (unsigned char)243;
int var_12 = -579334052;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
