#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)2;
int var_9 = 160188998;
unsigned int var_11 = 2315634587U;
unsigned short var_13 = (unsigned short)15462;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)-77;
long long int var_19 = -4990790957088898594LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -654115547791090LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
