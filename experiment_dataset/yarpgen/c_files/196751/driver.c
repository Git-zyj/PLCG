#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 337470309573134992ULL;
unsigned int var_1 = 4208921485U;
signed char var_2 = (signed char)60;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 8646642812806023065ULL;
unsigned short var_10 = (unsigned short)27099;
int zero = 0;
long long int var_11 = -3073943063754662347LL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)42158;
unsigned long long int var_14 = 2305551888756186367ULL;
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
