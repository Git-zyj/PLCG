#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -679423562;
int var_6 = -71272026;
int var_8 = -1618873017;
unsigned short var_9 = (unsigned short)51774;
unsigned long long int var_15 = 15408513763287090180ULL;
unsigned short var_16 = (unsigned short)19502;
int zero = 0;
_Bool var_17 = (_Bool)1;
int var_18 = -913030768;
void init() {
}

void checksum() {
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
