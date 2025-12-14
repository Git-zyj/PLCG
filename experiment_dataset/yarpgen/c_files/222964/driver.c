#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-52;
_Bool var_2 = (_Bool)0;
long long int var_3 = -8522561421189606244LL;
unsigned short var_4 = (unsigned short)16908;
unsigned long long int var_6 = 4132287191734322674ULL;
signed char var_8 = (signed char)-21;
unsigned short var_9 = (unsigned short)54378;
short var_11 = (short)23391;
int var_12 = -720318522;
unsigned int var_13 = 338748430U;
int zero = 0;
long long int var_14 = -9057531718474254268LL;
unsigned short var_15 = (unsigned short)56119;
long long int var_16 = -3039090094729139202LL;
unsigned int var_17 = 3384048747U;
long long int var_18 = -7467627514878944466LL;
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
