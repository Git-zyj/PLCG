#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1166121020;
unsigned long long int var_1 = 10390309881945013880ULL;
long long int var_2 = -6106079652350112006LL;
int var_3 = 909731594;
unsigned long long int var_11 = 15903137869367195076ULL;
unsigned short var_14 = (unsigned short)9216;
unsigned long long int var_15 = 2829776267386203009ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 6819125954924517738ULL;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 890659048393534838ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
