#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2285381706837458652ULL;
unsigned char var_2 = (unsigned char)44;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 2628188863U;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 210408419U;
unsigned char var_7 = (unsigned char)79;
unsigned char var_8 = (unsigned char)246;
unsigned long long int var_9 = 1638556097259610940ULL;
unsigned char var_11 = (unsigned char)65;
unsigned int var_12 = 3285127996U;
unsigned char var_13 = (unsigned char)176;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)208;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)231;
unsigned long long int var_18 = 18320748975106437677ULL;
unsigned int var_19 = 3849483694U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
