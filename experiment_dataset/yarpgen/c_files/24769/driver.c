#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-23;
unsigned char var_3 = (unsigned char)240;
short var_7 = (short)-10215;
_Bool var_10 = (_Bool)1;
short var_11 = (short)26093;
unsigned int var_12 = 2554346590U;
unsigned char var_13 = (unsigned char)127;
signed char var_14 = (signed char)121;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)207;
int zero = 0;
unsigned short var_17 = (unsigned short)25924;
unsigned short var_18 = (unsigned short)62634;
unsigned int var_19 = 3823770314U;
long long int var_20 = 3772627932195226545LL;
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
