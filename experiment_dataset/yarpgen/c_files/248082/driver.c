#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9276570356854607655ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -6041608732841910956LL;
short var_6 = (short)4766;
_Bool var_7 = (_Bool)1;
long long int var_8 = -1933634785530996779LL;
long long int var_10 = 3413732722681411662LL;
short var_11 = (short)-22978;
int zero = 0;
unsigned int var_12 = 226900728U;
long long int var_13 = 5825973198876824514LL;
int var_14 = 558483012;
long long int var_15 = -8090810613892745704LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
