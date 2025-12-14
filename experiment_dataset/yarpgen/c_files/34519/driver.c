#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2235885312U;
signed char var_1 = (signed char)-98;
signed char var_3 = (signed char)-113;
unsigned long long int var_6 = 6934067044738636463ULL;
unsigned long long int var_7 = 12120051076879768967ULL;
unsigned long long int var_8 = 14929830708528307764ULL;
unsigned long long int var_10 = 10303458142473816062ULL;
long long int var_12 = 8445365460950560401LL;
short var_13 = (short)19560;
signed char var_14 = (signed char)121;
unsigned short var_15 = (unsigned short)37092;
int zero = 0;
unsigned long long int var_16 = 16683242631970666416ULL;
unsigned long long int var_17 = 14984190078958281581ULL;
long long int var_18 = 3489412367365207174LL;
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
