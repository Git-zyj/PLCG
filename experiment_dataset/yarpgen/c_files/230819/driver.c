#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4923197584111942643ULL;
signed char var_1 = (signed char)-25;
_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
long long int var_5 = 63215616547060624LL;
unsigned int var_7 = 3741936981U;
unsigned long long int var_11 = 4033779053989971281ULL;
unsigned long long int var_13 = 5632429417973646969ULL;
unsigned short var_14 = (unsigned short)4669;
long long int var_15 = -7856776526051641437LL;
long long int var_16 = 953688435496786175LL;
int zero = 0;
unsigned short var_17 = (unsigned short)59578;
signed char var_18 = (signed char)29;
unsigned char var_19 = (unsigned char)226;
short var_20 = (short)-411;
unsigned short var_21 = (unsigned short)24242;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
