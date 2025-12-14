#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-70;
signed char var_8 = (signed char)34;
long long int var_9 = 1515843758749406602LL;
int zero = 0;
long long int var_10 = 5679801975815792506LL;
unsigned int var_11 = 1424947812U;
long long int var_12 = 4629816124803386539LL;
int var_13 = -1591372568;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
