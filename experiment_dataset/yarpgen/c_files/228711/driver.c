#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2029494366;
short var_1 = (short)19003;
unsigned long long int var_4 = 13374377786298587173ULL;
signed char var_5 = (signed char)80;
signed char var_8 = (signed char)14;
unsigned char var_9 = (unsigned char)180;
int zero = 0;
unsigned int var_10 = 1094560714U;
unsigned short var_11 = (unsigned short)1250;
signed char var_12 = (signed char)-18;
signed char var_13 = (signed char)-80;
int var_14 = 797375321;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
