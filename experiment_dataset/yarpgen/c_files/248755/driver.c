#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)44;
int var_3 = -2021873685;
signed char var_4 = (signed char)5;
unsigned long long int var_6 = 2748902985466372907ULL;
short var_9 = (short)-4625;
short var_10 = (short)-21491;
signed char var_13 = (signed char)-124;
signed char var_15 = (signed char)74;
int zero = 0;
unsigned long long int var_19 = 2525010516009156928ULL;
_Bool var_20 = (_Bool)0;
int var_21 = -1526408052;
unsigned long long int var_22 = 14055450509423144917ULL;
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
