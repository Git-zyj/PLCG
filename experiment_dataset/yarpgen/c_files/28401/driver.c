#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3546595111U;
_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)27345;
int var_5 = -869073577;
int var_7 = 2135008641;
unsigned short var_8 = (unsigned short)17719;
int zero = 0;
int var_10 = 1811868575;
long long int var_11 = -561222148853627330LL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
