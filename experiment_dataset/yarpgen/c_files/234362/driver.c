#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)72;
long long int var_3 = 3925099173422371501LL;
unsigned short var_4 = (unsigned short)38313;
unsigned long long int var_8 = 16591781568667050817ULL;
int var_10 = 1763025551;
unsigned int var_14 = 33186184U;
int zero = 0;
int var_16 = -1207030706;
long long int var_17 = 5441818116457113152LL;
void init() {
}

void checksum() {
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
