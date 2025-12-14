#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 704263362U;
long long int var_2 = 5213838779431423428LL;
signed char var_6 = (signed char)-51;
signed char var_8 = (signed char)85;
long long int var_11 = 8797269678624005902LL;
unsigned char var_12 = (unsigned char)26;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -302006160316951696LL;
void init() {
}

void checksum() {
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
