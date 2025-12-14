#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -307334113;
signed char var_5 = (signed char)-80;
signed char var_6 = (signed char)80;
signed char var_7 = (signed char)-9;
signed char var_9 = (signed char)-50;
int var_13 = -1098593113;
int var_14 = -230696700;
int zero = 0;
signed char var_15 = (signed char)-124;
int var_16 = 1115108995;
int var_17 = -1279251729;
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
