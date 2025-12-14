#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4228587704U;
unsigned int var_1 = 2926141887U;
int var_2 = 1613445639;
unsigned short var_3 = (unsigned short)37259;
unsigned long long int var_5 = 7012027947516209693ULL;
int var_11 = 784525697;
int zero = 0;
unsigned long long int var_15 = 7793838050589042194ULL;
signed char var_16 = (signed char)-102;
short var_17 = (short)-12115;
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
