#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 214544275;
unsigned long long int var_2 = 17858410522297265801ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 513696050U;
int zero = 0;
unsigned short var_13 = (unsigned short)18402;
_Bool var_14 = (_Bool)0;
long long int var_15 = 7037024925167481104LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
