#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)69;
unsigned long long int var_9 = 650797446519512378ULL;
long long int var_10 = -2535328914389960253LL;
unsigned int var_11 = 911632579U;
signed char var_12 = (signed char)-126;
long long int var_13 = -3261185361445666267LL;
signed char var_14 = (signed char)104;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)77;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)1994;
void init() {
}

void checksum() {
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
