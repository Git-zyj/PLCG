#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2530662663U;
_Bool var_2 = (_Bool)1;
long long int var_3 = -4589346066287699192LL;
unsigned long long int var_4 = 10809314974116192029ULL;
_Bool var_6 = (_Bool)1;
long long int var_8 = -5235841118723159102LL;
int zero = 0;
unsigned int var_12 = 3718598813U;
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
