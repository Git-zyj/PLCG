#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)46;
short var_1 = (short)19744;
unsigned short var_2 = (unsigned short)59975;
unsigned short var_3 = (unsigned short)1330;
_Bool var_4 = (_Bool)0;
long long int var_5 = 5784558946311942795LL;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)82;
short var_8 = (short)29574;
unsigned short var_9 = (unsigned short)46424;
int var_10 = 2104880650;
short var_11 = (short)-22539;
_Bool var_12 = (_Bool)0;
int var_13 = 704519272;
unsigned short var_14 = (unsigned short)30376;
long long int var_15 = -4198689203661022881LL;
int zero = 0;
signed char var_16 = (signed char)-108;
signed char var_17 = (signed char)52;
unsigned short var_18 = (unsigned short)51362;
signed char var_19 = (signed char)-39;
unsigned short var_20 = (unsigned short)5652;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
