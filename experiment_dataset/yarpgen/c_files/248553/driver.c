#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58575;
signed char var_4 = (signed char)-79;
unsigned long long int var_5 = 4138845627317727607ULL;
unsigned short var_6 = (unsigned short)37765;
unsigned short var_9 = (unsigned short)57009;
unsigned long long int var_10 = 13609375766689695583ULL;
int zero = 0;
int var_16 = 43906412;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-62;
long long int var_19 = 7558698632528301576LL;
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
