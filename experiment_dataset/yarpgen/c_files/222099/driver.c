#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6762899156830825409LL;
unsigned long long int var_3 = 5600638959872196754ULL;
unsigned int var_4 = 1918648818U;
long long int var_8 = -1530410331887689577LL;
signed char var_9 = (signed char)-65;
int zero = 0;
long long int var_11 = 3958441370088315657LL;
signed char var_12 = (signed char)-50;
signed char var_13 = (signed char)-60;
void init() {
}

void checksum() {
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
