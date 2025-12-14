#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_4 = (unsigned short)21060;
short var_5 = (short)26664;
int var_9 = 309914349;
unsigned int var_10 = 3068216184U;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)28124;
int zero = 0;
unsigned short var_17 = (unsigned short)28129;
unsigned int var_18 = 4224650416U;
signed char var_19 = (signed char)66;
void init() {
}

void checksum() {
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
