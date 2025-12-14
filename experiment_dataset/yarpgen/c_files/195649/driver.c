#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 15741110894828666481ULL;
unsigned int var_14 = 2652548077U;
unsigned long long int var_16 = 3231981634002295352ULL;
int zero = 0;
int var_19 = 58556823;
unsigned int var_20 = 3810623311U;
unsigned short var_21 = (unsigned short)16136;
long long int var_22 = -3369365863593118264LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
