#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 485748294149718732LL;
long long int var_1 = 7659118164880595708LL;
long long int var_2 = 8090831620949736116LL;
long long int var_3 = 5898568497374047461LL;
long long int var_6 = 8488752390224428367LL;
long long int var_7 = 7023295488421233633LL;
long long int var_11 = -1464163178408462440LL;
long long int var_13 = 4086638616985900341LL;
long long int var_14 = 8034512969019115342LL;
int zero = 0;
long long int var_15 = -5705325087860504909LL;
long long int var_16 = -5815880569142066637LL;
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
