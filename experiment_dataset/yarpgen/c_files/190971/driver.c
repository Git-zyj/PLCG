#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -820154015727464226LL;
int var_4 = 2056430937;
short var_5 = (short)-17338;
signed char var_9 = (signed char)79;
unsigned int var_11 = 3884640025U;
_Bool var_12 = (_Bool)1;
unsigned short var_14 = (unsigned short)20956;
int zero = 0;
int var_16 = 738446610;
long long int var_17 = 1323395286814457869LL;
void init() {
}

void checksum() {
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
