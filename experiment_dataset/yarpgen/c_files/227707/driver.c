#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1496627695;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 18299318931586834334ULL;
unsigned int var_9 = 1570687173U;
unsigned long long int var_12 = 6100195513726118592ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)240;
unsigned int var_15 = 928201165U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
