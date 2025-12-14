#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27621;
long long int var_4 = 3631290362024535930LL;
short var_5 = (short)4871;
int zero = 0;
long long int var_17 = -2199740249461999591LL;
short var_18 = (short)-23418;
signed char var_19 = (signed char)2;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
