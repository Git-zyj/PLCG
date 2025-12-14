#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1773269542;
unsigned long long int var_6 = 6168979413439186329ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)-55;
int zero = 0;
signed char var_12 = (signed char)-34;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
