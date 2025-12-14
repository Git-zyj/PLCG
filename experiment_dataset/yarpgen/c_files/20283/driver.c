#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)84;
unsigned long long int var_4 = 11155380210926467118ULL;
signed char var_5 = (signed char)115;
int var_7 = 1007172515;
int var_12 = -1377102957;
long long int var_17 = 800566548332916711LL;
signed char var_18 = (signed char)32;
int zero = 0;
unsigned long long int var_19 = 7171244707317651307ULL;
signed char var_20 = (signed char)-14;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
