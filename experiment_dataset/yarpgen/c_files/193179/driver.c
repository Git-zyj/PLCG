#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3467839459968130597LL;
short var_6 = (short)9037;
long long int var_7 = 274885146507362573LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_10 = 7112905781754206253ULL;
unsigned long long int var_11 = 1228356522238063368ULL;
unsigned long long int var_12 = 295770723260622258ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
