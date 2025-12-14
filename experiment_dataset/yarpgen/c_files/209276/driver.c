#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -852577358582303162LL;
unsigned char var_3 = (unsigned char)109;
unsigned int var_5 = 3780111672U;
unsigned char var_8 = (unsigned char)138;
unsigned long long int var_10 = 12492292096791248948ULL;
signed char var_11 = (signed char)125;
short var_13 = (short)21373;
int zero = 0;
unsigned char var_14 = (unsigned char)163;
unsigned char var_15 = (unsigned char)179;
unsigned long long int var_16 = 847893476824406283ULL;
signed char var_17 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
