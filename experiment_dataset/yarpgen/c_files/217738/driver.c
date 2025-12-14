#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45942;
_Bool var_3 = (_Bool)1;
signed char var_7 = (signed char)18;
long long int var_8 = -8148477426668835837LL;
unsigned int var_10 = 2515438024U;
unsigned short var_13 = (unsigned short)43099;
int zero = 0;
unsigned long long int var_16 = 16789349768730825829ULL;
_Bool var_17 = (_Bool)1;
long long int var_18 = 8242668986452265819LL;
unsigned short var_19 = (unsigned short)49430;
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
