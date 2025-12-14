#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2554537088308554660LL;
unsigned long long int var_2 = 284728893063602995ULL;
long long int var_3 = -2264602547272316675LL;
unsigned int var_4 = 915676822U;
unsigned long long int var_6 = 673948403919641875ULL;
int zero = 0;
short var_16 = (short)2924;
long long int var_17 = 5245370233222130603LL;
long long int var_18 = -3341795042780356854LL;
unsigned long long int var_19 = 16346894335306170977ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
