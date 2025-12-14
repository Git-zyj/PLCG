#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29895;
unsigned long long int var_9 = 5445805091268240520ULL;
unsigned short var_10 = (unsigned short)63411;
_Bool var_12 = (_Bool)0;
unsigned long long int var_15 = 4703489143609242417ULL;
unsigned long long int var_18 = 6717462608781115170ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)32226;
signed char var_21 = (signed char)-4;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
