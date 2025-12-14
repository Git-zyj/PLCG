#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3000774406722900462LL;
int var_3 = 1328598261;
_Bool var_4 = (_Bool)1;
int zero = 0;
short var_13 = (short)5103;
_Bool var_14 = (_Bool)0;
short var_15 = (short)3087;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
