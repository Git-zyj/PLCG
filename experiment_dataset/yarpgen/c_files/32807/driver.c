#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 10767244U;
int var_8 = -918254178;
unsigned int var_10 = 3314733554U;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 14689847094243340013ULL;
int zero = 0;
short var_18 = (short)7849;
int var_19 = 666306612;
unsigned long long int var_20 = 8572205560875055082ULL;
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
