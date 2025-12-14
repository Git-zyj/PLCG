#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)117;
int var_6 = 1827936234;
signed char var_7 = (signed char)81;
unsigned long long int var_8 = 1562468649008981714ULL;
unsigned char var_11 = (unsigned char)183;
int zero = 0;
signed char var_12 = (signed char)-126;
signed char var_13 = (signed char)27;
unsigned long long int var_14 = 5578039029375839352ULL;
unsigned char var_15 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
