#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16796043553533964948ULL;
unsigned long long int var_13 = 17888281707109437886ULL;
unsigned long long int var_14 = 4056283630494477992ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)48196;
long long int var_18 = -254103540539891666LL;
unsigned long long int var_19 = 12197985289987340731ULL;
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
