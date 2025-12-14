#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 190248481;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7420628976867496159ULL;
signed char var_8 = (signed char)-88;
short var_9 = (short)-16038;
int var_11 = -50807762;
int zero = 0;
short var_13 = (short)-7412;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-25036;
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
