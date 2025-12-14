#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5587310893839067437LL;
signed char var_2 = (signed char)-29;
int var_5 = 1060483588;
unsigned long long int var_6 = 17194077973621906100ULL;
int zero = 0;
int var_12 = -710239074;
int var_13 = 172027659;
_Bool var_14 = (_Bool)1;
int var_15 = -525426803;
void init() {
}

void checksum() {
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
