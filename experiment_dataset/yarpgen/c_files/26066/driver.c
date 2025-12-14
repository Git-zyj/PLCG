#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)199;
unsigned short var_1 = (unsigned short)34282;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)136;
short var_5 = (short)14302;
unsigned short var_6 = (unsigned short)59957;
unsigned long long int var_7 = 12950216785531952079ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_11 = (short)-27399;
unsigned long long int var_12 = 6225175597721701444ULL;
unsigned char var_13 = (unsigned char)253;
short var_14 = (short)-12664;
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
