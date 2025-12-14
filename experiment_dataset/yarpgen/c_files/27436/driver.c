#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5300899849452295961LL;
unsigned int var_2 = 4043798903U;
_Bool var_3 = (_Bool)1;
long long int var_5 = 5459864779018426529LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_12 = 2293432452747413421ULL;
int zero = 0;
int var_15 = 1013437064;
unsigned char var_16 = (unsigned char)174;
long long int var_17 = -1197730841006344875LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
