#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1382696482;
unsigned short var_5 = (unsigned short)41844;
long long int var_6 = -8000537393931459944LL;
int var_9 = -434383727;
int zero = 0;
signed char var_15 = (signed char)75;
signed char var_16 = (signed char)5;
unsigned short var_17 = (unsigned short)11885;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
