#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -920825408;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)11;
unsigned long long int var_7 = 646451472371902199ULL;
_Bool var_9 = (_Bool)1;
int var_11 = 1946296082;
signed char var_12 = (signed char)-85;
short var_14 = (short)-20695;
long long int var_15 = 7768930156143140016LL;
int zero = 0;
signed char var_20 = (signed char)-111;
long long int var_21 = 7806356794708532729LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
