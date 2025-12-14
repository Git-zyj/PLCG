#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11090643058297149944ULL;
unsigned int var_2 = 493575619U;
long long int var_3 = 5550400911380449490LL;
signed char var_5 = (signed char)-74;
signed char var_7 = (signed char)-18;
long long int var_14 = 796836715741977313LL;
long long int var_17 = -1323864921214624082LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)51611;
void init() {
}

void checksum() {
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
