#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
signed char var_2 = (signed char)15;
signed char var_5 = (signed char)-67;
signed char var_6 = (signed char)-102;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)82;
int zero = 0;
signed char var_11 = (signed char)-22;
signed char var_12 = (signed char)40;
signed char var_13 = (signed char)-108;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
