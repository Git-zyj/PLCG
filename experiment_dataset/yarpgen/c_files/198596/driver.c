#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-25;
_Bool var_7 = (_Bool)1;
long long int var_12 = -3836153432640853403LL;
int zero = 0;
signed char var_18 = (signed char)93;
signed char var_19 = (signed char)-82;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
