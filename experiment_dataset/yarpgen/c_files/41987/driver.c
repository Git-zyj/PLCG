#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38436;
_Bool var_1 = (_Bool)0;
int var_3 = 188916209;
unsigned short var_4 = (unsigned short)438;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int var_11 = -1100129564;
unsigned short var_12 = (unsigned short)5870;
short var_14 = (short)20629;
int var_15 = 1021887676;
long long int var_17 = -163153117974654754LL;
int zero = 0;
int var_18 = 773845968;
short var_19 = (short)4749;
short var_20 = (short)10485;
short var_21 = (short)32197;
unsigned short var_22 = (unsigned short)25214;
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
