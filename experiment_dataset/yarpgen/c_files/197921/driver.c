#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7824038733582213469LL;
short var_2 = (short)10908;
int var_4 = -1506309132;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)28543;
unsigned short var_8 = (unsigned short)23251;
int var_9 = 1989983340;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
