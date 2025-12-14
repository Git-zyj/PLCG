#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60024;
int var_3 = -1690678638;
_Bool var_4 = (_Bool)0;
unsigned short var_7 = (unsigned short)17121;
unsigned char var_13 = (unsigned char)194;
unsigned short var_16 = (unsigned short)63153;
int zero = 0;
int var_17 = 1375900102;
int var_18 = -2138273733;
long long int var_19 = -3907182443067991303LL;
unsigned int var_20 = 2000527537U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
