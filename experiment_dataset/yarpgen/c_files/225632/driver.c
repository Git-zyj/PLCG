#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 10366828676677806451ULL;
unsigned short var_9 = (unsigned short)11890;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_19 = 572387427;
unsigned long long int var_20 = 12906550040551804085ULL;
unsigned short var_21 = (unsigned short)51377;
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
