#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12196550284025802385ULL;
signed char var_3 = (signed char)-80;
_Bool var_4 = (_Bool)1;
long long int var_8 = 3815746866626119978LL;
unsigned long long int var_9 = 13568442476732481741ULL;
short var_13 = (short)-25204;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 6478943550855743808LL;
unsigned long long int var_18 = 10981178842460485592ULL;
void init() {
}

void checksum() {
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
