#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1545930097904761534LL;
unsigned int var_1 = 3028484017U;
signed char var_2 = (signed char)-67;
unsigned long long int var_4 = 3512058868584107317ULL;
unsigned long long int var_6 = 18060772098497954697ULL;
short var_7 = (short)26447;
int zero = 0;
unsigned long long int var_15 = 8956158166488044641ULL;
unsigned short var_16 = (unsigned short)51267;
short var_17 = (short)-2565;
unsigned int var_18 = 88326680U;
short var_19 = (short)24157;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
