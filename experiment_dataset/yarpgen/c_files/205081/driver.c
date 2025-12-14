#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2826100670U;
_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)19853;
unsigned long long int var_3 = 9863754771942584384ULL;
unsigned short var_4 = (unsigned short)43833;
short var_5 = (short)-3777;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-14828;
long long int var_10 = -1143364293580769501LL;
int zero = 0;
long long int var_12 = 5865353940687043680LL;
unsigned long long int var_13 = 6195606266884200702ULL;
signed char var_14 = (signed char)-45;
unsigned long long int var_15 = 2455695011632499930ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
