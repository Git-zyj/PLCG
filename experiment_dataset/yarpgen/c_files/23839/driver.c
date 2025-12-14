#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6068578087853508276ULL;
unsigned long long int var_1 = 14073773548832783577ULL;
unsigned char var_3 = (unsigned char)53;
unsigned char var_5 = (unsigned char)208;
unsigned int var_6 = 4250947107U;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)40146;
unsigned int var_12 = 987161733U;
int var_13 = -891122270;
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
