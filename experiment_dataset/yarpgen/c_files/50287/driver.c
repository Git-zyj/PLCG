#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4768514518125151733ULL;
unsigned int var_8 = 2349003531U;
unsigned char var_9 = (unsigned char)244;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 5134949465458025885ULL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 8825706948941986256LL;
int zero = 0;
signed char var_16 = (signed char)112;
unsigned int var_17 = 4136346995U;
_Bool var_18 = (_Bool)1;
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
