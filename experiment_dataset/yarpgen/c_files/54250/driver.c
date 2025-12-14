#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1174446608;
unsigned int var_1 = 406821206U;
unsigned short var_2 = (unsigned short)15429;
signed char var_3 = (signed char)-14;
unsigned short var_5 = (unsigned short)44930;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)13;
unsigned int var_8 = 379915740U;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 1369843837U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
