#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_7 = 3876166849U;
unsigned long long int var_10 = 4167650550652101154ULL;
int zero = 0;
unsigned long long int var_18 = 2684211985897103508ULL;
unsigned short var_19 = (unsigned short)20123;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
