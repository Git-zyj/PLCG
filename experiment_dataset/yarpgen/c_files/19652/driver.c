#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1709875877;
_Bool var_5 = (_Bool)1;
long long int var_7 = 890188396213467342LL;
unsigned long long int var_8 = 16913881426978344477ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_12 = 7626194186091705408LL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-26;
unsigned char var_15 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
