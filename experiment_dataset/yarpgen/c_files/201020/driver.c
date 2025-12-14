#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_4 = 16600954553418425905ULL;
unsigned int var_5 = 3753289595U;
unsigned long long int var_6 = 16234998486237228099ULL;
unsigned long long int var_7 = 4067750947682104360ULL;
_Bool var_8 = (_Bool)1;
int var_9 = -451374466;
unsigned char var_10 = (unsigned char)146;
int zero = 0;
signed char var_11 = (signed char)120;
unsigned char var_12 = (unsigned char)7;
unsigned long long int var_13 = 10505077013823763028ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
