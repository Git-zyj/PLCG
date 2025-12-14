#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -900459792;
unsigned long long int var_9 = 3972753322688010515ULL;
int zero = 0;
int var_11 = -1500833618;
unsigned char var_12 = (unsigned char)90;
long long int var_13 = -8219112012813890829LL;
void init() {
}

void checksum() {
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
