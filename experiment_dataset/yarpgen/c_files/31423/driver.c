#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2152950014739008202LL;
int var_3 = 1845740596;
int var_9 = -609376270;
int var_12 = 1381614376;
_Bool var_13 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)-29;
short var_15 = (short)32151;
signed char var_16 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
