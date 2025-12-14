#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)199;
signed char var_11 = (signed char)28;
unsigned char var_12 = (unsigned char)252;
long long int var_13 = 8530128352026982806LL;
int zero = 0;
long long int var_19 = 7327162843523538381LL;
unsigned int var_20 = 435567924U;
int var_21 = 1028329118;
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
