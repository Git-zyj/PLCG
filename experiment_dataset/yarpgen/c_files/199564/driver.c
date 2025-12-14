#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)63;
unsigned int var_2 = 1087579272U;
unsigned char var_4 = (unsigned char)247;
unsigned char var_5 = (unsigned char)253;
unsigned short var_6 = (unsigned short)12623;
int var_7 = -675379563;
signed char var_9 = (signed char)109;
int zero = 0;
int var_10 = -1196618396;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-102;
signed char var_13 = (signed char)-93;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
