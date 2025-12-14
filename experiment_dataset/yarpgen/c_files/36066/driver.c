#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -8090391584364652401LL;
short var_7 = (short)17193;
long long int var_10 = 6350948756809206013LL;
int zero = 0;
unsigned long long int var_17 = 3758043511075300305ULL;
signed char var_18 = (signed char)27;
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
