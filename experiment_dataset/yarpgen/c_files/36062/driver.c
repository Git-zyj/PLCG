#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 1884052260470764262LL;
unsigned char var_13 = (unsigned char)28;
long long int var_17 = 3157865434413018424LL;
unsigned long long int var_18 = 17749602855903344328ULL;
int zero = 0;
unsigned int var_20 = 91969143U;
long long int var_21 = -1629397633327965086LL;
unsigned long long int var_22 = 1936071258647016393ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
