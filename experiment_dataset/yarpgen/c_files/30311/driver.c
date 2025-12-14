#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5600979445290130496LL;
long long int var_6 = 2904886872184938503LL;
long long int var_14 = -479642909046581116LL;
int var_15 = 711801283;
int zero = 0;
long long int var_16 = 4134164947617888726LL;
short var_17 = (short)-11233;
long long int var_18 = -9023809014845940712LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
