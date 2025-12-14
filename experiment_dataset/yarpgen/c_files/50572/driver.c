#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1300341655U;
unsigned long long int var_6 = 13133962006953193252ULL;
unsigned int var_11 = 1259908458U;
unsigned long long int var_12 = 2097606189724847849ULL;
signed char var_14 = (signed char)-47;
int zero = 0;
unsigned long long int var_17 = 2304847453080236460ULL;
long long int var_18 = 9075554103893227332LL;
unsigned int var_19 = 2277624869U;
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
