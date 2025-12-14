#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
unsigned short var_1 = (unsigned short)14294;
unsigned char var_2 = (unsigned char)14;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)60300;
unsigned long long int var_8 = 7218764549646521512ULL;
signed char var_9 = (signed char)-78;
unsigned long long int var_10 = 3879229755368924382ULL;
int zero = 0;
unsigned int var_11 = 3551766964U;
signed char var_12 = (signed char)-103;
_Bool var_13 = (_Bool)0;
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
