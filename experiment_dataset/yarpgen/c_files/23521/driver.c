#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2490248316U;
unsigned int var_7 = 1037952014U;
unsigned long long int var_8 = 7597222256739318437ULL;
unsigned long long int var_10 = 10793817469243650872ULL;
unsigned char var_12 = (unsigned char)249;
unsigned char var_15 = (unsigned char)89;
int zero = 0;
unsigned char var_16 = (unsigned char)142;
unsigned short var_17 = (unsigned short)22783;
signed char var_18 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
