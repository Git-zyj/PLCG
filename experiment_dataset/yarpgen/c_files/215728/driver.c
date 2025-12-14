#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-92;
long long int var_3 = 4378849518059083391LL;
int var_4 = 1031503510;
long long int var_9 = 1495858072778033595LL;
int zero = 0;
unsigned short var_13 = (unsigned short)19700;
unsigned long long int var_14 = 1585780389624469897ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
