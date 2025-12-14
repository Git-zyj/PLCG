#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1718321655477926621LL;
unsigned int var_7 = 3240205720U;
_Bool var_9 = (_Bool)1;
unsigned short var_13 = (unsigned short)39045;
unsigned short var_14 = (unsigned short)32477;
unsigned long long int var_16 = 14949022312032925516ULL;
int zero = 0;
unsigned long long int var_19 = 16848425611954066248ULL;
unsigned short var_20 = (unsigned short)56330;
short var_21 = (short)7704;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
