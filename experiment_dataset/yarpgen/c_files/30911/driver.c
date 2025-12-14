#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13745814819954165998ULL;
signed char var_1 = (signed char)-101;
_Bool var_2 = (_Bool)0;
int var_3 = 735852015;
long long int var_4 = 5956868223453849326LL;
short var_5 = (short)-26690;
long long int var_6 = 2977005717912922529LL;
int zero = 0;
unsigned long long int var_11 = 12030748757259651044ULL;
short var_12 = (short)-24285;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
