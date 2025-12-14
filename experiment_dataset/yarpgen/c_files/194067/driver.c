#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-24703;
signed char var_3 = (signed char)-28;
int var_4 = -1115616029;
signed char var_5 = (signed char)103;
signed char var_10 = (signed char)-84;
unsigned char var_12 = (unsigned char)163;
int var_13 = -55023649;
unsigned long long int var_14 = 12421728891087843172ULL;
signed char var_17 = (signed char)54;
signed char var_18 = (signed char)117;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1373858928;
unsigned char var_21 = (unsigned char)222;
int var_22 = 1879794819;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
