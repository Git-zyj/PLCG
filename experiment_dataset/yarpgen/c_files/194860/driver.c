#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_3 = (unsigned short)25881;
unsigned short var_11 = (unsigned short)40121;
_Bool var_12 = (_Bool)0;
int var_16 = 503488197;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 15117604854558429649ULL;
unsigned long long int var_19 = 10125756023492479187ULL;
void init() {
}

void checksum() {
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
