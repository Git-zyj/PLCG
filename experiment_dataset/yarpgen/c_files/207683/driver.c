#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1246024590916063613ULL;
unsigned long long int var_11 = 2712275875802730848ULL;
unsigned short var_15 = (unsigned short)62343;
signed char var_16 = (signed char)-42;
int zero = 0;
long long int var_18 = 1169725317634821913LL;
unsigned short var_19 = (unsigned short)48925;
signed char var_20 = (signed char)38;
unsigned long long int var_21 = 16023958344711016653ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
