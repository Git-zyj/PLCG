#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -520129462144522343LL;
long long int var_1 = 325334529938154417LL;
int var_2 = 1164378449;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 1836918475959440919ULL;
signed char var_12 = (signed char)-25;
long long int var_13 = 842513220997501295LL;
unsigned short var_14 = (unsigned short)2030;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)98;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
