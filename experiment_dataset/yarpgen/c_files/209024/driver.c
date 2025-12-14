#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57902;
unsigned long long int var_1 = 6293085920288909073ULL;
unsigned int var_3 = 328277804U;
short var_4 = (short)11773;
_Bool var_6 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 1337315508U;
long long int var_14 = -8870892177743645414LL;
int zero = 0;
unsigned int var_16 = 3871608478U;
short var_17 = (short)-9682;
unsigned long long int var_18 = 8992021873379115017ULL;
unsigned short var_19 = (unsigned short)22200;
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
