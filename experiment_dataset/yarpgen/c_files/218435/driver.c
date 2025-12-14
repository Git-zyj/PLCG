#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)232;
_Bool var_4 = (_Bool)1;
signed char var_7 = (signed char)-60;
long long int var_10 = -8799044878238635642LL;
int var_11 = -1154166766;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)63277;
long long int var_14 = -8398217979610636826LL;
signed char var_19 = (signed char)-20;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)47118;
long long int var_22 = 4574108446641922790LL;
int var_23 = -595483164;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
