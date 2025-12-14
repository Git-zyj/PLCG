#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5702854916268187299ULL;
long long int var_1 = -2962248130784955265LL;
signed char var_2 = (signed char)-82;
long long int var_3 = 206515413599041520LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 16909339392359201172ULL;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)203;
void init() {
}

void checksum() {
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
