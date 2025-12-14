#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18238988672162397041ULL;
unsigned long long int var_5 = 15328620454083782170ULL;
unsigned short var_7 = (unsigned short)31784;
int var_10 = -414666041;
unsigned short var_14 = (unsigned short)1090;
int zero = 0;
long long int var_15 = 2758497289721873236LL;
unsigned long long int var_16 = 17328557338129654564ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
