#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 18290453089830748077ULL;
int var_4 = 1623039854;
unsigned int var_9 = 1158516499U;
long long int var_10 = -6262197599157108477LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3760270509U;
void init() {
}

void checksum() {
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
