#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 414075061;
unsigned char var_4 = (unsigned char)147;
unsigned long long int var_5 = 8985820391598811298ULL;
unsigned long long int var_7 = 11243585557477559017ULL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 9220598494808951677LL;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_17 = (signed char)-36;
_Bool var_18 = (_Bool)0;
long long int var_19 = -4385652121812142823LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
