#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18069658706148362435ULL;
unsigned long long int var_2 = 8115208539997065559ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 14044173652253131771ULL;
unsigned short var_6 = (unsigned short)45186;
unsigned short var_7 = (unsigned short)31074;
int zero = 0;
unsigned int var_11 = 1366811873U;
_Bool var_12 = (_Bool)1;
int var_13 = -2637149;
unsigned int var_14 = 2942938229U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
