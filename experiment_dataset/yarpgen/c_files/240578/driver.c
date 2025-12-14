#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-8641;
unsigned int var_6 = 1329797851U;
int var_8 = 131970991;
unsigned char var_9 = (unsigned char)139;
long long int var_10 = -6253297412164787621LL;
_Bool var_11 = (_Bool)0;
long long int var_13 = 6733677823647496824LL;
int zero = 0;
long long int var_14 = -6213727091682408837LL;
long long int var_15 = 505367442493118848LL;
long long int var_16 = 6070208013845632533LL;
void init() {
}

void checksum() {
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
