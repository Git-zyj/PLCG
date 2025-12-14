#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 6425862550202146704LL;
long long int var_2 = -3548882893181092877LL;
unsigned long long int var_7 = 2866321472025457166ULL;
long long int var_8 = -9125676509967617987LL;
short var_9 = (short)-29038;
short var_10 = (short)26450;
signed char var_12 = (signed char)-110;
unsigned long long int var_13 = 4309021733462636046ULL;
int zero = 0;
signed char var_14 = (signed char)-63;
long long int var_15 = 4947941511010980594LL;
int var_16 = 2078851002;
short var_17 = (short)23534;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
