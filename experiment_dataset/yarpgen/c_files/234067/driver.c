#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 774799569U;
long long int var_3 = 7822849275551663246LL;
unsigned short var_5 = (unsigned short)27921;
int var_9 = 1330554742;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 3095792109986577154ULL;
signed char var_13 = (signed char)-70;
unsigned long long int var_15 = 12092152262272524993ULL;
int var_19 = -567400176;
int zero = 0;
unsigned int var_20 = 763804486U;
unsigned char var_21 = (unsigned char)184;
void init() {
}

void checksum() {
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
