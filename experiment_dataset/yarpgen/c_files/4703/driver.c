#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31708;
_Bool var_5 = (_Bool)1;
int var_7 = -227244506;
signed char var_8 = (signed char)-60;
short var_9 = (short)18152;
long long int var_15 = 2766330443379408509LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)31474;
signed char var_20 = (signed char)-14;
long long int var_21 = -5280832342027390308LL;
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
