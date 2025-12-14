#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4157276952867120880LL;
long long int var_2 = -8872426897363640206LL;
short var_3 = (short)6717;
unsigned short var_5 = (unsigned short)10410;
short var_7 = (short)-4374;
short var_10 = (short)-23296;
signed char var_11 = (signed char)-75;
int zero = 0;
short var_14 = (short)29547;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
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
