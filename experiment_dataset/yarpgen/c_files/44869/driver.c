#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)151;
long long int var_3 = -5782418648265258552LL;
unsigned int var_4 = 2896232156U;
unsigned int var_6 = 2326237992U;
long long int var_9 = 2117227660878028417LL;
signed char var_10 = (signed char)-73;
long long int var_12 = -4486763470824029441LL;
signed char var_13 = (signed char)-35;
int zero = 0;
long long int var_17 = 5485916793954158462LL;
signed char var_18 = (signed char)-26;
unsigned short var_19 = (unsigned short)23175;
unsigned int var_20 = 788229830U;
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
