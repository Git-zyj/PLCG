#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)43413;
int var_3 = -550513229;
unsigned long long int var_4 = 12227928809510111745ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -1398753737228093568LL;
int var_10 = 726403875;
unsigned int var_11 = 965523238U;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = 454252969;
int var_14 = 912999484;
unsigned short var_15 = (unsigned short)30599;
long long int var_16 = 4718421096080479346LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
