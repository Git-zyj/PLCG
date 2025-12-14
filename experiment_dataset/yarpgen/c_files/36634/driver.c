#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-102;
unsigned int var_7 = 2744167434U;
long long int var_8 = -6964833069690069181LL;
unsigned long long int var_9 = 6543940627846788507ULL;
unsigned short var_10 = (unsigned short)40721;
_Bool var_12 = (_Bool)0;
int var_14 = 769361070;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2156833367U;
signed char var_20 = (signed char)69;
unsigned short var_21 = (unsigned short)38861;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
