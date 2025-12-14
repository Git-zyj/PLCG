#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)5;
unsigned short var_2 = (unsigned short)13017;
unsigned short var_3 = (unsigned short)11412;
short var_5 = (short)-11554;
unsigned long long int var_6 = 11256960422752926180ULL;
signed char var_7 = (signed char)-114;
int var_8 = -40373532;
unsigned long long int var_9 = 833294732658415545ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)56329;
int var_17 = 1706652452;
unsigned short var_18 = (unsigned short)7443;
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
