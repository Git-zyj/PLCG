#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 2722938388060760050LL;
short var_6 = (short)26485;
signed char var_7 = (signed char)-39;
unsigned short var_8 = (unsigned short)22399;
unsigned long long int var_9 = 14874610925633875463ULL;
unsigned int var_12 = 839126115U;
short var_14 = (short)-28739;
_Bool var_15 = (_Bool)0;
int var_17 = 1175544030;
int zero = 0;
int var_20 = -1403630420;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
