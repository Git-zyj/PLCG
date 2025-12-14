#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)105;
short var_3 = (short)25958;
signed char var_5 = (signed char)122;
short var_6 = (short)10962;
signed char var_8 = (signed char)-13;
int zero = 0;
long long int var_13 = 3280258937776423867LL;
int var_14 = 1905627771;
long long int var_15 = -6975362018065694776LL;
int var_16 = 908839489;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
