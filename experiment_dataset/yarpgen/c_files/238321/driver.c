#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18993;
unsigned long long int var_1 = 18024169945426173087ULL;
unsigned short var_2 = (unsigned short)58876;
signed char var_3 = (signed char)-117;
unsigned long long int var_4 = 13434201026693336085ULL;
unsigned long long int var_5 = 3303175823571906152ULL;
signed char var_6 = (signed char)-17;
short var_7 = (short)-4654;
unsigned long long int var_9 = 3388255925662627497ULL;
int zero = 0;
unsigned long long int var_10 = 1767000699439914948ULL;
short var_11 = (short)-21190;
int var_12 = 1101022554;
unsigned char var_13 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
