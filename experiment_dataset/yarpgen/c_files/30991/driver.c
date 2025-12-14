#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
unsigned short var_1 = (unsigned short)42094;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)7973;
unsigned long long int var_6 = 15078211431919511278ULL;
long long int var_8 = 1586631241017530397LL;
unsigned long long int var_11 = 5008040127954279605ULL;
unsigned long long int var_14 = 2185461694941578607ULL;
int zero = 0;
int var_16 = 625262064;
unsigned short var_17 = (unsigned short)63660;
long long int var_18 = -6312452969649878933LL;
void init() {
}

void checksum() {
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
