#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)27570;
int var_9 = 1857744905;
unsigned long long int var_10 = 10224173757200385753ULL;
int zero = 0;
int var_11 = 314635522;
unsigned char var_12 = (unsigned char)167;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)25276;
long long int var_15 = 5288249207291560341LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
