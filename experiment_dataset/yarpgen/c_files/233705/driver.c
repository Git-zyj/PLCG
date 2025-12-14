#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)698;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)109;
int var_7 = 1880010030;
int var_10 = 387982738;
long long int var_12 = -1575279650645271841LL;
unsigned int var_15 = 279540034U;
int zero = 0;
signed char var_16 = (signed char)-60;
unsigned long long int var_17 = 17955648084505727794ULL;
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
