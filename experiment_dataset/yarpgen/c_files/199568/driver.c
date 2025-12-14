#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 1837385904880015845ULL;
short var_12 = (short)18214;
signed char var_13 = (signed char)63;
int zero = 0;
unsigned long long int var_14 = 4636373253760586140ULL;
signed char var_15 = (signed char)-4;
signed char var_16 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
