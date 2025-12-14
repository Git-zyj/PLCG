#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3764786624754594401ULL;
short var_2 = (short)70;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 16852583800252863325ULL;
unsigned int var_6 = 2714480742U;
unsigned int var_9 = 3178654911U;
int zero = 0;
unsigned char var_10 = (unsigned char)179;
signed char var_11 = (signed char)-93;
long long int var_12 = 2595197105973810220LL;
unsigned long long int var_13 = 11147231397895739150ULL;
unsigned short var_14 = (unsigned short)21264;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
