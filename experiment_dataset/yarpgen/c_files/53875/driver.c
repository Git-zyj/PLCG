#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 6358755997010861992ULL;
unsigned short var_4 = (unsigned short)41199;
unsigned int var_9 = 3092418256U;
signed char var_14 = (signed char)38;
unsigned long long int var_16 = 8886152916852266688ULL;
int zero = 0;
unsigned long long int var_17 = 8604853767535755733ULL;
unsigned short var_18 = (unsigned short)64060;
signed char var_19 = (signed char)-21;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
