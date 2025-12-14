#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3532220001094968310ULL;
signed char var_6 = (signed char)95;
_Bool var_7 = (_Bool)0;
signed char var_10 = (signed char)25;
unsigned int var_11 = 1307104348U;
unsigned short var_12 = (unsigned short)45965;
int var_13 = -153488352;
int zero = 0;
unsigned int var_14 = 3497013861U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
