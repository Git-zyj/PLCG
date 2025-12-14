#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18194383998876636478ULL;
unsigned long long int var_1 = 17950155755216224189ULL;
signed char var_5 = (signed char)-15;
signed char var_6 = (signed char)115;
long long int var_7 = 4678335826966048133LL;
unsigned long long int var_9 = 565412599310844263ULL;
signed char var_12 = (signed char)29;
unsigned long long int var_14 = 11052232918837550823ULL;
unsigned long long int var_19 = 2886679088673439689ULL;
int zero = 0;
unsigned long long int var_20 = 6967648910584769289ULL;
signed char var_21 = (signed char)86;
signed char var_22 = (signed char)63;
signed char var_23 = (signed char)35;
long long int var_24 = -7466184042701057205LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
