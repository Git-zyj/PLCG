#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11936433394780337177ULL;
unsigned long long int var_3 = 7989300821699962845ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 8005414834535164453ULL;
void init() {
}

void checksum() {
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
