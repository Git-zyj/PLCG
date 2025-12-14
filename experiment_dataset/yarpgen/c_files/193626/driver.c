#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 451207976052289157ULL;
signed char var_4 = (signed char)-127;
unsigned char var_7 = (unsigned char)146;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 2454302048753892250ULL;
long long int var_13 = -81836129312676847LL;
unsigned char var_14 = (unsigned char)151;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 2154774047978527313ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
