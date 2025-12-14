#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2797708113437458234LL;
_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned char var_10 = (unsigned char)3;
signed char var_12 = (signed char)100;
signed char var_13 = (signed char)-49;
unsigned long long int var_15 = 4067063894827781965ULL;
unsigned char var_16 = (unsigned char)207;
int zero = 0;
unsigned char var_17 = (unsigned char)181;
unsigned int var_18 = 2927260889U;
void init() {
}

void checksum() {
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
