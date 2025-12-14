#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5296754912291357248LL;
short var_6 = (short)9434;
short var_9 = (short)-5307;
int zero = 0;
long long int var_11 = -7601857594131622996LL;
long long int var_12 = 7100477848311956601LL;
long long int var_13 = 3625383216456721201LL;
long long int var_14 = 5280893965217626399LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
