#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4116108614U;
unsigned short var_3 = (unsigned short)8712;
int var_5 = 239088082;
long long int var_9 = -228332681115943356LL;
short var_10 = (short)-32464;
signed char var_11 = (signed char)31;
int zero = 0;
unsigned char var_12 = (unsigned char)154;
unsigned int var_13 = 4282566406U;
signed char var_14 = (signed char)-116;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
