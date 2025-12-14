#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5948502488722975120LL;
long long int var_6 = 8332811660817718406LL;
_Bool var_9 = (_Bool)0;
unsigned int var_12 = 207400375U;
int zero = 0;
unsigned long long int var_15 = 9044822247740903660ULL;
int var_16 = 379961011;
long long int var_17 = -1088631142273257317LL;
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
