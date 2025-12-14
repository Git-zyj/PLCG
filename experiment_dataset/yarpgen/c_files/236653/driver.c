#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
signed char var_3 = (signed char)95;
unsigned int var_5 = 3680847480U;
unsigned char var_7 = (unsigned char)59;
unsigned long long int var_9 = 5537049791496701268ULL;
unsigned short var_10 = (unsigned short)2188;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 16966084063751182637ULL;
int var_13 = 825822156;
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
