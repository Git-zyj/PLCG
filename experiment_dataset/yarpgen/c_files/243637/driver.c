#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_5 = (unsigned char)162;
unsigned char var_7 = (unsigned char)172;
unsigned char var_11 = (unsigned char)22;
unsigned short var_15 = (unsigned short)36142;
unsigned short var_16 = (unsigned short)56216;
unsigned short var_18 = (unsigned short)46034;
int zero = 0;
signed char var_20 = (signed char)121;
signed char var_21 = (signed char)123;
unsigned long long int var_22 = 7473058913990805359ULL;
unsigned long long int var_23 = 10357953737803361730ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
