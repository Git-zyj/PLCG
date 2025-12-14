#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2205178180237993805LL;
int var_1 = 1635108888;
long long int var_5 = 7594715928073377203LL;
unsigned long long int var_17 = 2969630840838643515ULL;
int zero = 0;
int var_18 = 2068457753;
unsigned short var_19 = (unsigned short)86;
signed char var_20 = (signed char)13;
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
