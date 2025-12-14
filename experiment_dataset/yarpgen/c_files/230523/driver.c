#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14850989864857216536ULL;
_Bool var_1 = (_Bool)0;
signed char var_7 = (signed char)70;
signed char var_9 = (signed char)-18;
int zero = 0;
long long int var_10 = 7003449490242766759LL;
long long int var_11 = -573624085516071882LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
