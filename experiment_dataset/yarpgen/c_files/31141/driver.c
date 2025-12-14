#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1488540035;
unsigned short var_2 = (unsigned short)32974;
long long int var_4 = 3652992881727985560LL;
unsigned long long int var_5 = 7440237114678471651ULL;
short var_6 = (short)-2373;
unsigned char var_7 = (unsigned char)15;
short var_9 = (short)-26008;
long long int var_10 = 3508194668115761784LL;
unsigned int var_11 = 470003796U;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 10897390345560783753ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 17847078462730406613ULL;
short var_19 = (short)-1029;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
