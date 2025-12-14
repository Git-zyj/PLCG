#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8193052075152415125ULL;
unsigned long long int var_2 = 16601143144431863403ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2787143940U;
unsigned long long int var_8 = 7780980344337584253ULL;
unsigned long long int var_9 = 17921529158253213833ULL;
int zero = 0;
short var_10 = (short)-11272;
unsigned int var_11 = 3555662664U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
