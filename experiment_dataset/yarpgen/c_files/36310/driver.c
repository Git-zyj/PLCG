#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2087183196U;
unsigned long long int var_2 = 15267801178945542349ULL;
unsigned short var_10 = (unsigned short)40914;
long long int var_12 = 3428372795516598194LL;
long long int var_13 = 7146563627023434107LL;
unsigned long long int var_18 = 6872885400268989919ULL;
unsigned long long int var_19 = 7071773809807628040ULL;
int zero = 0;
unsigned int var_20 = 1846861002U;
signed char var_21 = (signed char)4;
void init() {
}

void checksum() {
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
