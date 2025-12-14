#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
long long int var_7 = -236929105414316827LL;
long long int var_8 = 1581218358207334562LL;
int var_9 = 23847993;
unsigned int var_11 = 759561461U;
long long int var_16 = 6852090941616968198LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 15343245449710792773ULL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
