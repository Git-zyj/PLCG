#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 8645785219320340135LL;
unsigned long long int var_3 = 1217288194368664201ULL;
unsigned long long int var_5 = 2968575941290475483ULL;
long long int var_6 = 6858258919497136200LL;
signed char var_10 = (signed char)-51;
unsigned long long int var_11 = 8666060562111525413ULL;
signed char var_12 = (signed char)-70;
int zero = 0;
int var_13 = -1288409114;
signed char var_14 = (signed char)-96;
int var_15 = 1762423547;
void init() {
}

void checksum() {
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
