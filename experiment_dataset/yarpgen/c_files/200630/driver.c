#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 15372220979106374335ULL;
unsigned long long int var_7 = 12605100682345516548ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 18027196744241409671ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
