#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2165982744U;
long long int var_2 = -5404279373731049072LL;
unsigned char var_3 = (unsigned char)34;
long long int var_4 = -6266708939700681919LL;
unsigned char var_6 = (unsigned char)29;
unsigned int var_7 = 2948467683U;
int var_10 = 658490195;
unsigned char var_11 = (unsigned char)9;
unsigned int var_12 = 3244372197U;
int zero = 0;
unsigned int var_13 = 2182056807U;
unsigned long long int var_14 = 6545403657658195872ULL;
void init() {
}

void checksum() {
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
