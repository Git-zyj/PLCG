#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25044;
unsigned short var_2 = (unsigned short)47339;
short var_3 = (short)-29947;
unsigned int var_10 = 1639825868U;
signed char var_11 = (signed char)-30;
unsigned long long int var_13 = 7814978312244385868ULL;
unsigned long long int var_16 = 9648616264175425975ULL;
unsigned int var_17 = 3451179872U;
int zero = 0;
short var_20 = (short)-3367;
long long int var_21 = 1620508178079512193LL;
int var_22 = 295306054;
void init() {
}

void checksum() {
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
