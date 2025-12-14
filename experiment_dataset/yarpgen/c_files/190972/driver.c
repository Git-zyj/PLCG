#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-951;
unsigned long long int var_2 = 9996515200553979558ULL;
unsigned long long int var_3 = 15378959369377661587ULL;
int var_6 = 1906773187;
unsigned long long int var_7 = 18142529230226257945ULL;
signed char var_8 = (signed char)91;
signed char var_10 = (signed char)90;
int var_11 = -1069703600;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 1249247779;
void init() {
}

void checksum() {
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
