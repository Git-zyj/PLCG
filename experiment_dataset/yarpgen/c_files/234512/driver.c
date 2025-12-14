#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 461836816U;
signed char var_5 = (signed char)-105;
unsigned long long int var_6 = 14246190108489674579ULL;
int var_9 = 746923767;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 8985768350971599085ULL;
unsigned short var_14 = (unsigned short)64625;
int zero = 0;
unsigned long long int var_16 = 12901482237010928094ULL;
int var_17 = -1411028462;
int var_18 = 339303962;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
