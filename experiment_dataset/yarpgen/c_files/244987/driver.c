#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)53;
short var_1 = (short)7524;
unsigned long long int var_2 = 11663508734514241665ULL;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 3569528332U;
long long int var_7 = -5188619141455594272LL;
short var_8 = (short)-8979;
long long int var_9 = -7304441078579880747LL;
unsigned long long int var_10 = 236591144175342566ULL;
unsigned long long int var_12 = 3243289816505159787ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)7495;
unsigned int var_16 = 961594345U;
signed char var_17 = (signed char)-63;
unsigned char var_18 = (unsigned char)203;
short var_19 = (short)27125;
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
