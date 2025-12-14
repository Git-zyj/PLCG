#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)175;
signed char var_11 = (signed char)-3;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 7074648775496761594LL;
int var_20 = 2111144299;
unsigned short var_21 = (unsigned short)65258;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
