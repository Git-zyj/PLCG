#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19481;
unsigned char var_1 = (unsigned char)164;
short var_3 = (short)18709;
signed char var_4 = (signed char)101;
unsigned short var_5 = (unsigned short)26629;
short var_6 = (short)-18695;
signed char var_7 = (signed char)-46;
unsigned short var_8 = (unsigned short)351;
int var_13 = -1007764714;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_19 = -3338763845285756267LL;
unsigned char var_20 = (unsigned char)116;
unsigned char var_21 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
