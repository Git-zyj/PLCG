#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1286948559;
long long int var_3 = 3827628929807981747LL;
long long int var_4 = 684483938071901412LL;
unsigned long long int var_8 = 13979558413931266349ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)39133;
signed char var_11 = (signed char)-81;
signed char var_12 = (signed char)-47;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
