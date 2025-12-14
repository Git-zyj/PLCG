#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-55;
unsigned short var_2 = (unsigned short)20139;
short var_10 = (short)-20;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 12977288541975862521ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_19 = -191931436114840737LL;
long long int var_20 = 4661447560241524075LL;
long long int var_21 = -8680988866853235328LL;
long long int var_22 = -6259227625870110667LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
