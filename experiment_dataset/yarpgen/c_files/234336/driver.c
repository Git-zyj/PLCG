#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 88298360U;
unsigned int var_2 = 3154686010U;
signed char var_3 = (signed char)-36;
short var_5 = (short)-4573;
int var_7 = 1205039431;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_10 = -5222977909842584871LL;
unsigned int var_11 = 339526850U;
unsigned char var_12 = (unsigned char)123;
unsigned long long int var_13 = 2416685905954409458ULL;
int var_14 = -534122434;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
