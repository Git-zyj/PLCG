#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1012874150357557721ULL;
_Bool var_1 = (_Bool)0;
short var_2 = (short)-20326;
int var_5 = -642150150;
unsigned short var_6 = (unsigned short)55938;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)41;
signed char var_12 = (signed char)68;
signed char var_13 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
