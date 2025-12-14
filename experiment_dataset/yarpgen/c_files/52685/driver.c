#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-77;
signed char var_8 = (signed char)7;
unsigned long long int var_9 = 10119195788781320955ULL;
int zero = 0;
unsigned int var_10 = 381108200U;
_Bool var_11 = (_Bool)1;
long long int var_12 = 4003685323349926312LL;
unsigned long long int var_13 = 15787514661019324640ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
