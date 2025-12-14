#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8377049202862605410LL;
long long int var_1 = -6275084384309920983LL;
long long int var_9 = -1297022740353621505LL;
long long int var_11 = -4770424069757086212LL;
long long int var_14 = -6710750032010561011LL;
long long int var_15 = -3364227395648122514LL;
int zero = 0;
long long int var_17 = 43228182751266937LL;
long long int var_18 = -5837716053980391359LL;
long long int var_19 = 5620855375060741010LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
