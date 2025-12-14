#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
short var_1 = (short)-14052;
short var_3 = (short)25677;
short var_4 = (short)23615;
unsigned long long int var_7 = 9793112357907176349ULL;
short var_8 = (short)22181;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)94;
short var_12 = (short)20049;
int zero = 0;
unsigned short var_14 = (unsigned short)48328;
signed char var_15 = (signed char)-83;
unsigned long long int var_16 = 15032272159021778309ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
