#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)149;
signed char var_6 = (signed char)-122;
int var_7 = 1849727340;
int var_10 = -672921331;
long long int var_11 = -8023861370796604193LL;
int zero = 0;
long long int var_13 = 8238150340541140593LL;
signed char var_14 = (signed char)-127;
unsigned long long int var_15 = 12858574325441138295ULL;
void init() {
}

void checksum() {
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
