#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 14228626819102288024ULL;
long long int var_9 = 6243724979985282662LL;
_Bool var_10 = (_Bool)0;
int var_11 = 2039301625;
signed char var_12 = (signed char)-112;
long long int var_13 = 5684433830589341489LL;
int zero = 0;
signed char var_14 = (signed char)-91;
unsigned long long int var_15 = 15437099366760462949ULL;
unsigned long long int var_16 = 2028694339079089806ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
