#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1220663944U;
long long int var_1 = 6405898649555882994LL;
unsigned int var_4 = 3269662475U;
short var_7 = (short)-8422;
unsigned int var_9 = 3411005231U;
unsigned int var_10 = 3847179759U;
short var_15 = (short)15961;
long long int var_16 = -4932661331483969947LL;
int zero = 0;
unsigned short var_17 = (unsigned short)8080;
long long int var_18 = -1840630572585941725LL;
unsigned long long int var_19 = 11921311755132715417ULL;
void init() {
}

void checksum() {
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
