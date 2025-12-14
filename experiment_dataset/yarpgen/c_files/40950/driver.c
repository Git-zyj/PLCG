#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1097743163;
unsigned short var_2 = (unsigned short)25222;
unsigned short var_3 = (unsigned short)14001;
unsigned short var_4 = (unsigned short)44377;
int var_6 = -797003496;
signed char var_7 = (signed char)-17;
_Bool var_8 = (_Bool)1;
int var_11 = -1749245878;
short var_14 = (short)-7217;
_Bool var_16 = (_Bool)0;
int var_17 = 285634366;
int zero = 0;
unsigned int var_20 = 3053132906U;
unsigned long long int var_21 = 18349420837742048349ULL;
void init() {
}

void checksum() {
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
