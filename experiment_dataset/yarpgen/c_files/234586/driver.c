#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16172251789666507076ULL;
unsigned short var_1 = (unsigned short)32853;
_Bool var_2 = (_Bool)0;
long long int var_3 = 5350244433168356790LL;
long long int var_4 = 7158523406315535472LL;
unsigned int var_6 = 2501129172U;
unsigned short var_10 = (unsigned short)22469;
signed char var_11 = (signed char)92;
signed char var_13 = (signed char)23;
signed char var_14 = (signed char)-53;
int zero = 0;
unsigned long long int var_15 = 9642374407509974843ULL;
unsigned short var_16 = (unsigned short)25814;
long long int var_17 = -497792267886315411LL;
int var_18 = 416271399;
_Bool var_19 = (_Bool)0;
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
