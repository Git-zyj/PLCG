#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -501777922;
unsigned long long int var_9 = 16426491056256350731ULL;
unsigned long long int var_10 = 17938685873248962851ULL;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
