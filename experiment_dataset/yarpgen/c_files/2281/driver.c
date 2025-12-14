#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1844750900U;
unsigned long long int var_5 = 6570153682809072967ULL;
_Bool var_8 = (_Bool)0;
long long int var_13 = -4291504229325041797LL;
int zero = 0;
unsigned long long int var_16 = 16094141672543419956ULL;
unsigned int var_17 = 3124302448U;
signed char var_18 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
