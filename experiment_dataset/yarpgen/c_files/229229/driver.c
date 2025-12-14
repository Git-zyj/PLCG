#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 222085576U;
signed char var_2 = (signed char)-35;
unsigned int var_9 = 177722524U;
unsigned long long int var_10 = 1025256634649461980ULL;
unsigned int var_11 = 2950818211U;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 3074044850U;
unsigned long long int var_21 = 6674811230985472633ULL;
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
