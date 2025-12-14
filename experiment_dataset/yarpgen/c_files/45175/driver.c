#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2587729359U;
unsigned long long int var_4 = 7547413627697926611ULL;
unsigned short var_9 = (unsigned short)37730;
short var_10 = (short)26361;
unsigned short var_12 = (unsigned short)26804;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)29800;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3269008340U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
