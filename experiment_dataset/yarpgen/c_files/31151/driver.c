#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-88;
unsigned int var_2 = 1793592868U;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-126;
int var_6 = 201746134;
unsigned char var_7 = (unsigned char)122;
signed char var_9 = (signed char)-94;
int zero = 0;
int var_10 = -965406077;
_Bool var_11 = (_Bool)0;
long long int var_12 = 4920686074527274809LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
