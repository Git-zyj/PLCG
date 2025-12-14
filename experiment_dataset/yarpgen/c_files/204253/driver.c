#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-24;
unsigned long long int var_7 = 12776685433352850347ULL;
unsigned char var_8 = (unsigned char)145;
int zero = 0;
unsigned int var_18 = 3792310909U;
int var_19 = -1871510502;
int var_20 = 1068642388;
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
