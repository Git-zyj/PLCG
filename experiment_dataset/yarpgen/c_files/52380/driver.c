#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2137229491U;
_Bool var_1 = (_Bool)0;
int var_6 = 647237192;
unsigned long long int var_8 = 7371630937640664885ULL;
unsigned int var_9 = 987385389U;
long long int var_11 = -1833464697117296323LL;
unsigned char var_14 = (unsigned char)59;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2857043788U;
long long int var_19 = -5675751558594909704LL;
void init() {
}

void checksum() {
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
