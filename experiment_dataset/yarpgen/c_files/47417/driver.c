#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)23;
long long int var_2 = -1579969361596269218LL;
unsigned char var_3 = (unsigned char)37;
_Bool var_7 = (_Bool)1;
unsigned short var_11 = (unsigned short)1483;
unsigned int var_12 = 3323293488U;
unsigned short var_14 = (unsigned short)29136;
int zero = 0;
long long int var_15 = -4846583267122900926LL;
signed char var_16 = (signed char)35;
_Bool var_17 = (_Bool)0;
int var_18 = 907300822;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
