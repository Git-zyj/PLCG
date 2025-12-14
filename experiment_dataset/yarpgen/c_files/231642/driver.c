#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
signed char var_8 = (signed char)-113;
signed char var_9 = (signed char)126;
signed char var_13 = (signed char)-118;
int zero = 0;
signed char var_19 = (signed char)109;
signed char var_20 = (signed char)-31;
signed char var_21 = (signed char)63;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
