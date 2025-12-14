#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3573045011U;
unsigned long long int var_5 = 761324294605508106ULL;
unsigned long long int var_9 = 11362003035057512244ULL;
short var_10 = (short)32475;
unsigned char var_11 = (unsigned char)46;
signed char var_12 = (signed char)82;
int zero = 0;
long long int var_14 = -4538000741875453484LL;
_Bool var_15 = (_Bool)1;
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
