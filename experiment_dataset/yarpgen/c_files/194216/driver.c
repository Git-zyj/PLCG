#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 7246690241825820325LL;
short var_6 = (short)25387;
unsigned short var_9 = (unsigned short)13662;
unsigned long long int var_11 = 13373722181317861310ULL;
long long int var_15 = 4644141580429968544LL;
long long int var_16 = -8439019848713368704LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 5399381086187491948LL;
long long int var_20 = 3605633157492634652LL;
void init() {
}

void checksum() {
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
