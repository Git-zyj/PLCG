#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = -879053358;
int var_11 = 859142149;
signed char var_13 = (signed char)123;
short var_15 = (short)7141;
unsigned int var_16 = 1259133703U;
unsigned short var_17 = (unsigned short)53056;
int zero = 0;
unsigned short var_18 = (unsigned short)63996;
unsigned long long int var_19 = 11057533636210103154ULL;
void init() {
}

void checksum() {
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
