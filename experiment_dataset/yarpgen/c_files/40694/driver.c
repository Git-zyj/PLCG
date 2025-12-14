#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1837785421;
long long int var_5 = 1889084182713008140LL;
long long int var_7 = 2618575641404052422LL;
_Bool var_10 = (_Bool)1;
unsigned char var_14 = (unsigned char)201;
long long int var_15 = 8206857478048322947LL;
signed char var_16 = (signed char)47;
int zero = 0;
unsigned int var_19 = 2297294217U;
unsigned short var_20 = (unsigned short)5358;
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
