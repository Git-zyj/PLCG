#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-68;
signed char var_1 = (signed char)85;
signed char var_2 = (signed char)39;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)43;
signed char var_9 = (signed char)-106;
int zero = 0;
signed char var_10 = (signed char)-83;
signed char var_11 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
