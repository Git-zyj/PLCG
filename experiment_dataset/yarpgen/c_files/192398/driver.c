#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2014124382U;
unsigned long long int var_1 = 91682834797136441ULL;
unsigned short var_8 = (unsigned short)52648;
signed char var_9 = (signed char)53;
int zero = 0;
signed char var_10 = (signed char)-117;
signed char var_11 = (signed char)25;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)1334;
int var_14 = -1011275820;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
