#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10786183971733037849ULL;
signed char var_2 = (signed char)125;
unsigned char var_3 = (unsigned char)51;
short var_5 = (short)-533;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 15632199271986576449ULL;
int zero = 0;
int var_13 = 2025698706;
unsigned char var_14 = (unsigned char)220;
short var_15 = (short)-11650;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
