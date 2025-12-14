#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)40;
long long int var_3 = -21771821756636888LL;
unsigned int var_4 = 1010010283U;
long long int var_5 = 7639285628407626259LL;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned long long int var_13 = 873828237043085758ULL;
int zero = 0;
unsigned long long int var_15 = 10190937573947991519ULL;
unsigned int var_16 = 3854978925U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
