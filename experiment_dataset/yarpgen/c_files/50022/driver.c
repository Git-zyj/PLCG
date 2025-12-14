#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)122;
long long int var_3 = -1017939140346014152LL;
short var_4 = (short)22087;
unsigned int var_5 = 1675022120U;
int var_6 = -1586212851;
unsigned int var_7 = 3444671023U;
unsigned int var_9 = 1917881988U;
unsigned int var_11 = 3464901897U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 17125561174648188503ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-4168;
unsigned long long int var_17 = 2878385104509271115ULL;
unsigned long long int var_18 = 16218938219173150445ULL;
void init() {
}

void checksum() {
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
