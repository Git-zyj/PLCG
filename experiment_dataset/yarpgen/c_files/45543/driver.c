#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11081999733961149112ULL;
unsigned long long int var_6 = 12860402751810001361ULL;
int var_7 = 143201457;
unsigned long long int var_10 = 15135501340500854414ULL;
unsigned char var_11 = (unsigned char)110;
int zero = 0;
signed char var_18 = (signed char)93;
signed char var_19 = (signed char)28;
signed char var_20 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
