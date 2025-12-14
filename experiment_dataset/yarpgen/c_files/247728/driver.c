#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7151796930975608625LL;
long long int var_12 = -9082873599335189402LL;
long long int var_14 = 4490631104264739042LL;
long long int var_19 = -2169352428802658738LL;
int zero = 0;
signed char var_20 = (signed char)-92;
long long int var_21 = -2388697434975398725LL;
long long int var_22 = -1906994945399382272LL;
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
