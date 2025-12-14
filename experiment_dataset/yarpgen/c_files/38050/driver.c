#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7347898548858441586LL;
long long int var_2 = -7665225150919284684LL;
long long int var_3 = -6609247643493037232LL;
long long int var_4 = -7471891192140540899LL;
int var_5 = 409402229;
long long int var_8 = 7394018125327336742LL;
long long int var_9 = 3182519766975819022LL;
long long int var_10 = -5326282059549194179LL;
int var_14 = -797794483;
int zero = 0;
short var_15 = (short)-20961;
long long int var_16 = 4262197674535347722LL;
long long int var_17 = 7922355331385379022LL;
int var_18 = -132285459;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
