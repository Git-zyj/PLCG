#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4743583866881375302ULL;
long long int var_1 = -897208351710721636LL;
long long int var_2 = -4728761757204583997LL;
int var_4 = 1830447253;
long long int var_5 = -5884132551024168673LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 9427202137242880294ULL;
unsigned long long int var_11 = 1186164527582825754ULL;
short var_12 = (short)-6902;
short var_13 = (short)28849;
unsigned long long int var_15 = 10077397697685006562ULL;
unsigned long long int var_16 = 4631839626071807153ULL;
unsigned short var_17 = (unsigned short)33608;
int zero = 0;
short var_18 = (short)27445;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)12843;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-22036;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
