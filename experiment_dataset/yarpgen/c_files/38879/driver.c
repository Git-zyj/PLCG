#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 3235638369U;
signed char var_11 = (signed char)-58;
long long int var_16 = -6565563006338164727LL;
int zero = 0;
long long int var_17 = -4478090973474447191LL;
signed char var_18 = (signed char)74;
long long int var_19 = -9070611452417389222LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
