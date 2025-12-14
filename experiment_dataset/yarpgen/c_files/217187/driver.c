#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1819200373;
_Bool var_2 = (_Bool)1;
long long int var_4 = 1975177407938923714LL;
long long int var_8 = 9142623159076616670LL;
unsigned char var_9 = (unsigned char)156;
long long int var_10 = 2570761600596206026LL;
signed char var_17 = (signed char)97;
int var_18 = 945421241;
int zero = 0;
unsigned long long int var_20 = 389818661038288220ULL;
long long int var_21 = -54923856862572204LL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 5872603718009722959ULL;
unsigned long long int var_24 = 8817088735625409809ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
