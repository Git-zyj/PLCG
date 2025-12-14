#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7106673621229700653ULL;
signed char var_7 = (signed char)-41;
unsigned short var_8 = (unsigned short)53459;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = -3501922879758696889LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
