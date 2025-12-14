#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
unsigned short var_1 = (unsigned short)62198;
_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)172;
unsigned int var_11 = 441100796U;
unsigned long long int var_13 = 16818256201455239209ULL;
int zero = 0;
int var_18 = -2104085458;
unsigned short var_19 = (unsigned short)38944;
signed char var_20 = (signed char)-121;
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
