#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13390;
_Bool var_2 = (_Bool)1;
long long int var_3 = -3320187322725341020LL;
long long int var_4 = 2362150720621996469LL;
unsigned char var_7 = (unsigned char)76;
unsigned int var_8 = 1894531663U;
long long int var_9 = -2185078042628098579LL;
unsigned int var_10 = 2595837105U;
unsigned int var_12 = 4260443271U;
short var_13 = (short)27105;
long long int var_14 = 6773842840305938316LL;
int var_15 = -583651084;
int zero = 0;
unsigned short var_18 = (unsigned short)10640;
int var_19 = 394744386;
signed char var_20 = (signed char)-84;
unsigned char var_21 = (unsigned char)1;
unsigned long long int var_22 = 10742813280453434371ULL;
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
