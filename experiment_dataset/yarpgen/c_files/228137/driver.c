#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4536806845961987593LL;
unsigned int var_9 = 695989060U;
long long int var_13 = -2985807719776432502LL;
unsigned int var_15 = 562495073U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 915469318U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
