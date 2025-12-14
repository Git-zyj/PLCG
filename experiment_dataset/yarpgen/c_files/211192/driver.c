#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -578720011;
unsigned long long int var_7 = 7511332553550569577ULL;
int var_8 = -1955233809;
signed char var_11 = (signed char)-33;
unsigned char var_12 = (unsigned char)213;
unsigned long long int var_16 = 17741826070617802453ULL;
int zero = 0;
signed char var_17 = (signed char)23;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
