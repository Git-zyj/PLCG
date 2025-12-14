#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13253108830842748779ULL;
unsigned long long int var_1 = 8852327927306272697ULL;
unsigned long long int var_2 = 6788185892121226408ULL;
unsigned long long int var_3 = 1081602484483538890ULL;
unsigned long long int var_5 = 14197197995361562433ULL;
unsigned long long int var_8 = 534556872002146262ULL;
unsigned long long int var_11 = 18284187240586459951ULL;
unsigned long long int var_12 = 2382771207741108188ULL;
unsigned long long int var_13 = 17543584732175596298ULL;
unsigned long long int var_15 = 6863964582903229723ULL;
int zero = 0;
unsigned long long int var_16 = 691508045135444232ULL;
unsigned long long int var_17 = 3997734072747754976ULL;
unsigned long long int var_18 = 4591048791157676710ULL;
unsigned long long int var_19 = 2559846130733361688ULL;
unsigned long long int var_20 = 6017315488592750390ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
