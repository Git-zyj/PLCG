#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -239155203;
unsigned long long int var_3 = 14004981462111673177ULL;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)28;
int var_10 = -1094048073;
short var_16 = (short)3289;
int zero = 0;
unsigned long long int var_18 = 4568400359090928330ULL;
long long int var_19 = -8140693996549241843LL;
signed char var_20 = (signed char)77;
signed char var_21 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
