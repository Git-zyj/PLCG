#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -217396337;
long long int var_7 = -4120774593510889792LL;
short var_8 = (short)25411;
unsigned int var_10 = 2563327072U;
unsigned long long int var_12 = 17690064832732403697ULL;
long long int var_13 = -5716810143822524289LL;
int zero = 0;
long long int var_17 = 6843381308776069681LL;
signed char var_18 = (signed char)105;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
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
