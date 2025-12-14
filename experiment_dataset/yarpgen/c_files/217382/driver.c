#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46547;
unsigned long long int var_2 = 3633021040590143733ULL;
_Bool var_3 = (_Bool)0;
int var_7 = -874793128;
int zero = 0;
unsigned int var_11 = 1370363042U;
unsigned int var_12 = 549416798U;
unsigned short var_13 = (unsigned short)35489;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
