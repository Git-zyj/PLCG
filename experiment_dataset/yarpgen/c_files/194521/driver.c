#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)15999;
unsigned long long int var_3 = 18157916278823520073ULL;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)18;
unsigned char var_6 = (unsigned char)182;
unsigned int var_8 = 1832508138U;
unsigned int var_12 = 4114402045U;
unsigned long long int var_15 = 13039658113682313228ULL;
int zero = 0;
unsigned int var_16 = 1351153252U;
signed char var_17 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
