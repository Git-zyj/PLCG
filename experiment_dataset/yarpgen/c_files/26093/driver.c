#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)55;
long long int var_7 = 5197974022296865355LL;
unsigned long long int var_9 = 14254777812293455451ULL;
long long int var_10 = 8443308750651904813LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -2092627003;
unsigned char var_13 = (unsigned char)106;
unsigned int var_14 = 1926631487U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
