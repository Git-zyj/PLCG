#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1707450171098591555ULL;
unsigned int var_2 = 2223904935U;
unsigned short var_5 = (unsigned short)40652;
signed char var_8 = (signed char)39;
unsigned short var_9 = (unsigned short)33636;
long long int var_10 = -3381426275443396373LL;
signed char var_12 = (signed char)-6;
long long int var_13 = -8522667331275422883LL;
int var_14 = -467727641;
int zero = 0;
unsigned short var_15 = (unsigned short)26920;
unsigned int var_16 = 1129846299U;
signed char var_17 = (signed char)-57;
void init() {
}

void checksum() {
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
