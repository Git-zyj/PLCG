#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 817236271950988773ULL;
long long int var_3 = 4951356525325894796LL;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned long long int var_11 = 14920756468840862317ULL;
unsigned long long int var_12 = 1911967476244635255ULL;
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
