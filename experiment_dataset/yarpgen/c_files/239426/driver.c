#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 4785280765597646254ULL;
unsigned long long int var_15 = 8875456465174188158ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-21110;
short var_19 = (short)10851;
void init() {
}

void checksum() {
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
