#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 8539127056746452652ULL;
unsigned long long int var_6 = 8534484779738287767ULL;
signed char var_7 = (signed char)109;
unsigned int var_8 = 3272104828U;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 6747853187983046264ULL;
signed char var_14 = (signed char)86;
short var_15 = (short)-16242;
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
