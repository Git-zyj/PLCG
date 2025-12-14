#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-42;
unsigned short var_5 = (unsigned short)23812;
int var_6 = -469551349;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_11 = (short)-11098;
int zero = 0;
short var_15 = (short)-3834;
short var_16 = (short)-21573;
unsigned short var_17 = (unsigned short)52370;
unsigned short var_18 = (unsigned short)60698;
int var_19 = -1383179635;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
