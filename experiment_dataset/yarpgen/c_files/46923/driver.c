#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1063;
unsigned int var_1 = 3461126761U;
unsigned int var_2 = 2080266371U;
unsigned short var_5 = (unsigned short)49048;
short var_6 = (short)-764;
long long int var_7 = -3526817989840147558LL;
int var_9 = 872317183;
int zero = 0;
unsigned long long int var_10 = 16405297074523387905ULL;
short var_11 = (short)-23804;
signed char var_12 = (signed char)-51;
unsigned long long int var_13 = 7675033014547053573ULL;
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
