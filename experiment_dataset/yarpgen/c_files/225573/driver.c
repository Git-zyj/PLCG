#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
int var_3 = -2112195651;
long long int var_4 = 6523570023638264063LL;
signed char var_6 = (signed char)76;
unsigned char var_7 = (unsigned char)132;
unsigned int var_9 = 4022375742U;
int zero = 0;
long long int var_11 = -1588964276798915067LL;
unsigned char var_12 = (unsigned char)229;
short var_13 = (short)-28206;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
