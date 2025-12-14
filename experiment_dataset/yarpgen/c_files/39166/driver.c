#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1614933980;
signed char var_3 = (signed char)91;
signed char var_4 = (signed char)-1;
short var_8 = (short)14921;
long long int var_12 = -5021854027958314593LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 2953627454063117686ULL;
long long int var_15 = 4117163817618427366LL;
long long int var_16 = -6215722003628696400LL;
short var_17 = (short)-2896;
unsigned short var_18 = (unsigned short)54198;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
