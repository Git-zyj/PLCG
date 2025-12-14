#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5823765982581853359ULL;
long long int var_7 = 7072608038401565536LL;
unsigned long long int var_8 = 17410063674046902743ULL;
long long int var_12 = -2931637918017975148LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -19374398;
void init() {
}

void checksum() {
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
