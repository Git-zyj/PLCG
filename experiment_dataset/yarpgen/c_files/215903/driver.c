#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2611;
_Bool var_3 = (_Bool)0;
unsigned long long int var_7 = 4632635125382743584ULL;
unsigned long long int var_11 = 5826049586975384156ULL;
int zero = 0;
unsigned long long int var_12 = 5405021112617788413ULL;
unsigned long long int var_13 = 1077338191692009951ULL;
unsigned long long int var_14 = 12470611836253962468ULL;
short var_15 = (short)3664;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
