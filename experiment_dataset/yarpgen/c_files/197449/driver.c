#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_7 = (unsigned short)31679;
_Bool var_9 = (_Bool)0;
unsigned long long int var_11 = 16857216726449937479ULL;
unsigned short var_12 = (unsigned short)18651;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 9890404721121771831ULL;
int zero = 0;
unsigned long long int var_20 = 15964214262227727205ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
