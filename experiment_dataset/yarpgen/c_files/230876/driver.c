#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)64;
short var_4 = (short)7663;
long long int var_9 = 6284957722479994534LL;
unsigned long long int var_17 = 5822773529144293419ULL;
int zero = 0;
long long int var_20 = 3739052361044793346LL;
unsigned char var_21 = (unsigned char)237;
signed char var_22 = (signed char)-63;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
