#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_5 = 1447656071464452396LL;
long long int var_9 = -8207693801020287691LL;
unsigned long long int var_10 = 17293331702424905313ULL;
_Bool var_15 = (_Bool)1;
short var_18 = (short)3191;
int zero = 0;
short var_19 = (short)-15724;
unsigned short var_20 = (unsigned short)40990;
_Bool var_21 = (_Bool)0;
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
