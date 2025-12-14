#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6591817078758488633LL;
unsigned int var_1 = 3527457751U;
int var_2 = -631065818;
long long int var_3 = 403586208957659367LL;
long long int var_8 = -1887036957393218203LL;
unsigned short var_10 = (unsigned short)40384;
signed char var_11 = (signed char)-93;
int zero = 0;
short var_13 = (short)7765;
int var_14 = -1951008496;
unsigned int var_15 = 1296803419U;
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
