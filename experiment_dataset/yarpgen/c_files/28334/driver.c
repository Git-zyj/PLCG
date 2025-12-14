#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 49929241859254260ULL;
int var_1 = 1753150408;
unsigned short var_2 = (unsigned short)24043;
int var_4 = -955415956;
long long int var_6 = 7025436373517294619LL;
short var_7 = (short)-4900;
unsigned long long int var_8 = 9648526982841646197ULL;
long long int var_14 = -8600246031295313516LL;
unsigned long long int var_15 = 3513996190777586366ULL;
short var_16 = (short)504;
int zero = 0;
unsigned short var_19 = (unsigned short)38569;
long long int var_20 = -4691793115573532591LL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 554916284558436054ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
