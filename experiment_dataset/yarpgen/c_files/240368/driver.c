#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 187366897270376328LL;
unsigned int var_2 = 2663406874U;
unsigned int var_3 = 3328692737U;
long long int var_7 = 1353313486835664953LL;
long long int var_11 = -8916547573626849926LL;
unsigned short var_16 = (unsigned short)16533;
int zero = 0;
unsigned long long int var_17 = 840134655366739827ULL;
int var_18 = -646422402;
int var_19 = 754607697;
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
