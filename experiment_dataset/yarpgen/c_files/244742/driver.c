#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1851769285248533915ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
short var_6 = (short)11957;
unsigned long long int var_7 = 12460946154206692118ULL;
unsigned long long int var_8 = 15621600484998727608ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 582174159;
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
