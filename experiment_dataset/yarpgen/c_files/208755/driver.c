#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3452826695260703330LL;
unsigned short var_10 = (unsigned short)27740;
int var_12 = -1353533694;
long long int var_15 = 6818527205906681437LL;
int zero = 0;
unsigned short var_16 = (unsigned short)30488;
signed char var_17 = (signed char)98;
int var_18 = -1046297911;
short var_19 = (short)-31839;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
