#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4786472834703763854LL;
long long int var_5 = -1406240674447475723LL;
int var_7 = 1722296373;
long long int var_11 = -4931555503380572568LL;
int zero = 0;
signed char var_15 = (signed char)-100;
unsigned char var_16 = (unsigned char)154;
_Bool var_17 = (_Bool)1;
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
