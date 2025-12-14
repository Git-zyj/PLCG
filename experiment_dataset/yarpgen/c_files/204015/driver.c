#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32539;
short var_1 = (short)-26474;
long long int var_2 = -2167088871445635725LL;
short var_4 = (short)-15840;
short var_6 = (short)4399;
short var_7 = (short)-20277;
short var_8 = (short)-17453;
unsigned long long int var_10 = 9606597190173680193ULL;
signed char var_11 = (signed char)-25;
unsigned long long int var_12 = 10994713374768506924ULL;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 6002331916758260858ULL;
unsigned short var_16 = (unsigned short)7547;
int zero = 0;
signed char var_17 = (signed char)-72;
unsigned short var_18 = (unsigned short)39962;
short var_19 = (short)25611;
signed char var_20 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
