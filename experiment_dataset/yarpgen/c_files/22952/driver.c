#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2098037880430627638LL;
_Bool var_1 = (_Bool)0;
long long int var_2 = -6605626680105659704LL;
short var_3 = (short)-13951;
long long int var_6 = 3056456340775235174LL;
signed char var_8 = (signed char)-9;
signed char var_11 = (signed char)-105;
unsigned char var_12 = (unsigned char)179;
int zero = 0;
unsigned short var_15 = (unsigned short)29202;
short var_16 = (short)-24596;
long long int var_17 = 7271474276937722817LL;
int var_18 = 618910401;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
