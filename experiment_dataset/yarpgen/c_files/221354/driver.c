#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
int var_2 = -46746777;
unsigned long long int var_4 = 16804229633830467457ULL;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 2632109874U;
unsigned int var_11 = 2429109562U;
unsigned long long int var_15 = 9628485047728715930ULL;
int zero = 0;
unsigned long long int var_16 = 7471723745756616669ULL;
unsigned long long int var_17 = 2478686447171609515ULL;
unsigned int var_18 = 2143160512U;
unsigned int var_19 = 1218698643U;
unsigned int var_20 = 80991513U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
