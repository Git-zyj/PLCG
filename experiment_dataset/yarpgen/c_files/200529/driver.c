#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-110;
unsigned int var_8 = 2324934220U;
unsigned int var_9 = 812200364U;
int zero = 0;
int var_10 = -1210381684;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 13807279939769074384ULL;
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
