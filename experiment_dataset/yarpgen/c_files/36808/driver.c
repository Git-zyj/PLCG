#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1504269183327265970ULL;
int var_4 = -1893417914;
short var_5 = (short)-2467;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 13061687736574529606ULL;
unsigned short var_10 = (unsigned short)45716;
signed char var_12 = (signed char)-28;
unsigned int var_13 = 14256661U;
signed char var_14 = (signed char)-62;
int zero = 0;
_Bool var_16 = (_Bool)0;
long long int var_17 = 7649947908740689294LL;
short var_18 = (short)19349;
signed char var_19 = (signed char)5;
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
