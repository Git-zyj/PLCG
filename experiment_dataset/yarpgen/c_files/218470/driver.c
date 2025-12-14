#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)229;
long long int var_3 = -5749970457145861883LL;
signed char var_4 = (signed char)-24;
signed char var_5 = (signed char)33;
unsigned int var_6 = 2011727449U;
unsigned long long int var_7 = 3495129774775856162ULL;
unsigned short var_9 = (unsigned short)30721;
int zero = 0;
unsigned short var_11 = (unsigned short)25889;
signed char var_12 = (signed char)-16;
_Bool var_13 = (_Bool)1;
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
