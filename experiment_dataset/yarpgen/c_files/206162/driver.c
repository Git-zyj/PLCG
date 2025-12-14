#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3576233705U;
long long int var_3 = 7259365207127374751LL;
unsigned short var_4 = (unsigned short)16952;
unsigned short var_7 = (unsigned short)11135;
int var_8 = -1803871432;
int var_10 = -1997585466;
int zero = 0;
long long int var_12 = -7147360958232892321LL;
unsigned short var_13 = (unsigned short)36857;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-23265;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
