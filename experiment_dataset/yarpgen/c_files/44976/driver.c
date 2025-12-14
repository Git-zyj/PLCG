#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1884873368U;
unsigned long long int var_5 = 10668910477942252559ULL;
unsigned int var_6 = 3518009296U;
unsigned long long int var_8 = 9493330619429285094ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_16 = 3203739441U;
long long int var_17 = -9063002794031031960LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
