#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8161151846936661692LL;
_Bool var_7 = (_Bool)0;
long long int var_10 = -1554454567609572234LL;
unsigned short var_11 = (unsigned short)33000;
int zero = 0;
unsigned long long int var_16 = 9117822601820353895ULL;
signed char var_17 = (signed char)-42;
unsigned long long int var_18 = 6058557118218365685ULL;
unsigned long long int var_19 = 529343066032695412ULL;
signed char var_20 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
