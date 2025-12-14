#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1006788682U;
long long int var_2 = -3624970583757880341LL;
int var_3 = -87242243;
long long int var_6 = -7752924518910086968LL;
int var_7 = -1388075199;
long long int var_8 = -5961183219574294900LL;
unsigned short var_9 = (unsigned short)21498;
int zero = 0;
signed char var_10 = (signed char)84;
short var_11 = (short)8327;
unsigned int var_12 = 743100215U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
