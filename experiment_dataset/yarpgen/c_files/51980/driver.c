#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14099645737817472400ULL;
unsigned long long int var_3 = 1049924878485935905ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
long long int var_15 = -6348103425762184906LL;
_Bool var_17 = (_Bool)0;
int var_18 = 1070516138;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 14927957222889261966ULL;
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
