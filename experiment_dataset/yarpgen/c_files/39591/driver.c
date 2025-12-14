#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_4 = (short)8779;
unsigned long long int var_9 = 8605203637761528743ULL;
short var_12 = (short)-13682;
unsigned long long int var_15 = 4291540782159747649ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)63;
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
