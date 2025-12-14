#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8703;
long long int var_2 = 8943314216012634707LL;
unsigned int var_7 = 2961611524U;
unsigned long long int var_9 = 14136861216816357231ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)45147;
unsigned long long int var_12 = 6401459949340492158ULL;
unsigned int var_13 = 591627111U;
unsigned long long int var_14 = 18214203829075077580ULL;
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
