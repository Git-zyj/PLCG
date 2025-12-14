#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5271;
long long int var_3 = -5655094537617156498LL;
long long int var_5 = 7362114572588495232LL;
long long int var_6 = 2503845677631565215LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = 421461262894993124LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
