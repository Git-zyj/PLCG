#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)236;
unsigned int var_3 = 3285083818U;
unsigned char var_4 = (unsigned char)38;
int var_6 = -1816753342;
_Bool var_7 = (_Bool)0;
int var_9 = 861568199;
unsigned char var_10 = (unsigned char)242;
_Bool var_11 = (_Bool)0;
int var_13 = 401816321;
int zero = 0;
int var_17 = 350430402;
unsigned char var_18 = (unsigned char)216;
int var_19 = -355323039;
_Bool var_20 = (_Bool)0;
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
