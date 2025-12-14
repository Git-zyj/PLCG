#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_6 = 10259971260806970870ULL;
short var_8 = (short)12885;
_Bool var_9 = (_Bool)1;
long long int var_10 = -7413108120640727228LL;
unsigned long long int var_14 = 5755116784078887644ULL;
unsigned long long int var_16 = 3254182784452594346ULL;
int var_17 = -1266610392;
int zero = 0;
unsigned long long int var_20 = 2555326072908522209ULL;
unsigned int var_21 = 1308177300U;
void init() {
}

void checksum() {
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
