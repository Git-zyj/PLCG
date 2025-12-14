#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1112050023U;
signed char var_1 = (signed char)-36;
unsigned short var_5 = (unsigned short)1382;
long long int var_6 = -7004037274204490206LL;
int var_9 = -2058914448;
signed char var_10 = (signed char)8;
_Bool var_11 = (_Bool)1;
unsigned short var_13 = (unsigned short)35753;
int zero = 0;
unsigned int var_19 = 3057873822U;
long long int var_20 = -7696753035427851796LL;
unsigned int var_21 = 285061169U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
