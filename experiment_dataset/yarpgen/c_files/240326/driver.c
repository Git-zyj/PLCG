#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -862995273423590806LL;
int var_1 = 889363787;
int var_2 = -689011140;
signed char var_7 = (signed char)-44;
signed char var_11 = (signed char)-79;
int zero = 0;
unsigned long long int var_17 = 18245236396132376765ULL;
signed char var_18 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
