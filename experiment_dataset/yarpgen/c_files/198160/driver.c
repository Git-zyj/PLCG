#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8734810461584646294LL;
long long int var_2 = 3512605307564981352LL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 12752526772908519671ULL;
unsigned int var_8 = 3546681757U;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-61;
int var_12 = -1281681650;
int zero = 0;
unsigned char var_13 = (unsigned char)177;
unsigned char var_14 = (unsigned char)154;
unsigned char var_15 = (unsigned char)2;
void init() {
}

void checksum() {
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
