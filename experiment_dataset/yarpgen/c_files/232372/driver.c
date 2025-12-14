#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4746;
unsigned int var_2 = 3095231649U;
short var_3 = (short)-15794;
unsigned short var_4 = (unsigned short)48554;
long long int var_8 = 6296585182122333848LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_14 = (unsigned short)29526;
unsigned long long int var_15 = 3249443529158089674ULL;
int var_16 = -1290191243;
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
