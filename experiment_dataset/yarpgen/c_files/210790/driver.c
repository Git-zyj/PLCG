#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9540494350593127557ULL;
signed char var_8 = (signed char)-39;
short var_10 = (short)5827;
int var_12 = 1522764127;
unsigned long long int var_16 = 15694530463902181737ULL;
int zero = 0;
signed char var_17 = (signed char)68;
unsigned long long int var_18 = 6284550920400066020ULL;
int var_19 = 928700041;
signed char var_20 = (signed char)-56;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
