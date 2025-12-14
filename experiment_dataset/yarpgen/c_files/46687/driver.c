#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4408;
unsigned long long int var_4 = 8722195745229806038ULL;
unsigned int var_7 = 3525010497U;
long long int var_8 = -4267091038230390043LL;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 997094435U;
_Bool var_14 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-93;
unsigned short var_17 = (unsigned short)3228;
short var_18 = (short)-26180;
void init() {
}

void checksum() {
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
