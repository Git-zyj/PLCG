#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)85;
unsigned char var_5 = (unsigned char)206;
signed char var_7 = (signed char)-123;
unsigned char var_8 = (unsigned char)138;
unsigned long long int var_9 = 6350357902914784552ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)207;
unsigned short var_12 = (unsigned short)9475;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
