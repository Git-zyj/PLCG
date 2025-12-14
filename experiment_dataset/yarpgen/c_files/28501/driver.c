#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3299126605U;
unsigned long long int var_3 = 4563501044025149281ULL;
unsigned short var_6 = (unsigned short)20998;
int var_7 = -1344706041;
unsigned long long int var_8 = 15241542825837933404ULL;
unsigned int var_11 = 1897140517U;
short var_12 = (short)32635;
signed char var_13 = (signed char)-109;
unsigned long long int var_15 = 6799366247314395872ULL;
int zero = 0;
short var_16 = (short)21412;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
long long int var_19 = 6757368966322512733LL;
void init() {
}

void checksum() {
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
