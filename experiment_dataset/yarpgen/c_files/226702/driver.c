#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)156;
unsigned short var_10 = (unsigned short)36091;
int var_11 = 1340552690;
signed char var_12 = (signed char)1;
int zero = 0;
signed char var_14 = (signed char)98;
unsigned long long int var_15 = 1629726174629311213ULL;
int var_16 = -1529807903;
unsigned int var_17 = 52209258U;
signed char var_18 = (signed char)118;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
