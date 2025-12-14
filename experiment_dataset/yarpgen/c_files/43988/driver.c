#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-40;
unsigned long long int var_4 = 3249715994338621847ULL;
unsigned char var_7 = (unsigned char)54;
unsigned char var_10 = (unsigned char)64;
int zero = 0;
unsigned short var_11 = (unsigned short)46154;
unsigned long long int var_12 = 6603573963544097457ULL;
unsigned long long int var_13 = 14811964402776285170ULL;
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
