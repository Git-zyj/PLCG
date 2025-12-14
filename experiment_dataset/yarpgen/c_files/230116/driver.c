#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8997381452781738475LL;
int var_4 = 2033610514;
unsigned long long int var_5 = 11292190802053183760ULL;
unsigned int var_7 = 911705059U;
int var_9 = -980081953;
unsigned long long int var_10 = 14969083056428777762ULL;
short var_11 = (short)-31341;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 454799172;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
