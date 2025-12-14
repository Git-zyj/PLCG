#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5903752451615183435LL;
unsigned int var_10 = 1096872221U;
unsigned long long int var_15 = 6678936015073728825ULL;
int zero = 0;
signed char var_19 = (signed char)-63;
int var_20 = -997047927;
unsigned char var_21 = (unsigned char)221;
signed char var_22 = (signed char)-119;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
