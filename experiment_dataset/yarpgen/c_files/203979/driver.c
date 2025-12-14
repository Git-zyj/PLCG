#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8254236397185158483LL;
signed char var_2 = (signed char)-36;
unsigned char var_11 = (unsigned char)139;
unsigned int var_12 = 4036123236U;
long long int var_13 = 5575771044524723964LL;
int zero = 0;
signed char var_14 = (signed char)112;
_Bool var_15 = (_Bool)1;
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
