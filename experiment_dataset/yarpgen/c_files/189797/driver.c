#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_4 = 1269886112719982279LL;
unsigned long long int var_7 = 10277696807347607096ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 5329070136350492465ULL;
signed char var_15 = (signed char)93;
unsigned char var_17 = (unsigned char)143;
int zero = 0;
unsigned char var_18 = (unsigned char)136;
unsigned char var_19 = (unsigned char)231;
int var_20 = -1320888382;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
