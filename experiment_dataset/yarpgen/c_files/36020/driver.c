#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
int var_1 = 1850595250;
short var_2 = (short)27303;
long long int var_3 = 77276718488479214LL;
long long int var_5 = 6671452433605098222LL;
unsigned short var_6 = (unsigned short)19536;
unsigned short var_7 = (unsigned short)60037;
signed char var_9 = (signed char)-82;
int var_10 = 2019710251;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
short var_13 = (short)26711;
int zero = 0;
int var_16 = -424179700;
int var_17 = 2064385628;
unsigned long long int var_18 = 3399110249000172928ULL;
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
