#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -44657384490636592LL;
unsigned int var_2 = 3350522098U;
short var_4 = (short)-774;
int var_8 = 443922674;
int zero = 0;
short var_13 = (short)3689;
unsigned int var_14 = 1512849598U;
signed char var_15 = (signed char)-107;
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
