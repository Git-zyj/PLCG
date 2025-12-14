#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)1403;
signed char var_4 = (signed char)-101;
long long int var_7 = -7918380220068693494LL;
int var_13 = -976820071;
int zero = 0;
short var_15 = (short)-17080;
unsigned long long int var_16 = 13479047550618503675ULL;
unsigned long long int var_17 = 12667227591446185903ULL;
void init() {
}

void checksum() {
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
