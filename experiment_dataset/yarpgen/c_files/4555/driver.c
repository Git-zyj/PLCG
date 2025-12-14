#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6351335549184738688LL;
signed char var_3 = (signed char)-36;
int var_4 = -1160761678;
int var_5 = -1268349739;
unsigned short var_6 = (unsigned short)37075;
long long int var_8 = 2847940773772781458LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 1324778594;
unsigned int var_11 = 2055559351U;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
