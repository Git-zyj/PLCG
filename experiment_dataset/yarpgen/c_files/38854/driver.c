#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8615811546093126766LL;
unsigned long long int var_6 = 9119986454841999418ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)62795;
unsigned int var_11 = 1436568840U;
_Bool var_14 = (_Bool)1;
long long int var_15 = 7803376904994787132LL;
int zero = 0;
unsigned int var_16 = 863800806U;
unsigned long long int var_17 = 2568336966948321841ULL;
signed char var_18 = (signed char)-43;
unsigned short var_19 = (unsigned short)39188;
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
