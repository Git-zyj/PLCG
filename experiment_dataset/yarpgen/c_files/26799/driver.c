#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)49741;
unsigned long long int var_12 = 17939140330133949146ULL;
unsigned short var_14 = (unsigned short)6113;
unsigned char var_15 = (unsigned char)239;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -1725305540;
_Bool var_19 = (_Bool)0;
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
