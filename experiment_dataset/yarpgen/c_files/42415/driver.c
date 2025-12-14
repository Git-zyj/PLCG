#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2691157531041108996LL;
long long int var_4 = -5683138531577248125LL;
long long int var_5 = -2845823094059489419LL;
long long int var_6 = 7734067585239462538LL;
long long int var_8 = -2609139047361068089LL;
long long int var_9 = 6050952359104603369LL;
long long int var_10 = 6062537820407134500LL;
int zero = 0;
long long int var_12 = -2774404527377373254LL;
long long int var_13 = -7445357057769565432LL;
long long int var_14 = 3634688645759633902LL;
void init() {
}

void checksum() {
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
