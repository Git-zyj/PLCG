#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5530928463652918582LL;
int var_1 = -539982774;
int var_2 = 633376525;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1120946139U;
unsigned long long int var_5 = 9947249984968764807ULL;
unsigned int var_7 = 614844796U;
short var_8 = (short)-19065;
int var_9 = -1175764240;
signed char var_11 = (signed char)-110;
long long int var_12 = -5478085495369376242LL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 4289399515436171841ULL;
signed char var_16 = (signed char)-8;
unsigned short var_17 = (unsigned short)57314;
short var_18 = (short)29262;
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
