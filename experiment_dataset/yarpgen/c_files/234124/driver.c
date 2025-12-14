#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6551693278935739710LL;
unsigned short var_3 = (unsigned short)60209;
int var_5 = 547675799;
int var_6 = -1656595424;
unsigned int var_11 = 2266315332U;
unsigned int var_12 = 3165496423U;
long long int var_13 = -399478417054591455LL;
unsigned short var_16 = (unsigned short)49392;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = 5427352810844355307LL;
unsigned long long int var_19 = 13004407554650532359ULL;
signed char var_20 = (signed char)-102;
short var_21 = (short)27205;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
