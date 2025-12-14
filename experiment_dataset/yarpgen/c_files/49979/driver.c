#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)10109;
unsigned long long int var_2 = 15308405870009795792ULL;
int var_3 = -543647975;
unsigned long long int var_4 = 8571896048143702014ULL;
unsigned long long int var_5 = 10954280885453224698ULL;
unsigned short var_6 = (unsigned short)31174;
_Bool var_7 = (_Bool)1;
int var_8 = -1519696109;
unsigned long long int var_9 = 1733371132530018295ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-15;
signed char var_12 = (signed char)0;
int var_13 = 1813694408;
unsigned int var_14 = 3528195014U;
unsigned int var_15 = 3472854503U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
