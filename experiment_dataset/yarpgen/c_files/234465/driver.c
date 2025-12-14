#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3906088263872857435ULL;
unsigned long long int var_7 = 4533704808967687702ULL;
unsigned short var_9 = (unsigned short)8292;
int var_13 = 1252162337;
int zero = 0;
int var_14 = -1746656018;
int var_15 = -1185040144;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
