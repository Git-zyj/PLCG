#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_3 = 13718165398512007612ULL;
long long int var_4 = 4936180094428088445LL;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 423763813U;
long long int var_9 = -2349472527431430790LL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3586260884U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)53248;
unsigned long long int var_15 = 17897655444753622734ULL;
unsigned short var_16 = (unsigned short)1274;
signed char var_17 = (signed char)-4;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
