#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_5 = 1980384123;
unsigned long long int var_9 = 3248249383460488345ULL;
int zero = 0;
unsigned long long int var_10 = 2686015023823719207ULL;
unsigned long long int var_11 = 1289180533424672216ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
