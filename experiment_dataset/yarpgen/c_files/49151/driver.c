#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3880439U;
long long int var_7 = 770019328794730198LL;
unsigned long long int var_9 = 16940884318971849761ULL;
unsigned char var_10 = (unsigned char)179;
int zero = 0;
unsigned long long int var_13 = 5829503856281086461ULL;
unsigned int var_14 = 3882312666U;
unsigned short var_15 = (unsigned short)57873;
signed char var_16 = (signed char)43;
unsigned int var_17 = 3137201006U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
