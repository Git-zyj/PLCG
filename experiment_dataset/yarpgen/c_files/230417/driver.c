#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)201;
long long int var_6 = -3041955891540637430LL;
signed char var_11 = (signed char)40;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-93;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)47792;
long long int var_18 = 3466013817132003055LL;
int var_19 = 293486833;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
