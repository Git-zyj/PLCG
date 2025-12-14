#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 2803643074851650089ULL;
long long int var_2 = 9185071757717663054LL;
signed char var_3 = (signed char)-78;
unsigned char var_4 = (unsigned char)25;
_Bool var_5 = (_Bool)1;
short var_7 = (short)31869;
_Bool var_8 = (_Bool)0;
int var_9 = -85256223;
int zero = 0;
long long int var_10 = 6037832567850030608LL;
unsigned short var_11 = (unsigned short)15170;
unsigned int var_12 = 1791639944U;
unsigned char var_13 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
