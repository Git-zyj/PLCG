#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18290875557313297408ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)35331;
signed char var_5 = (signed char)-87;
unsigned long long int var_6 = 2536662754392375389ULL;
unsigned char var_8 = (unsigned char)173;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 4842473451503093245ULL;
short var_18 = (short)15629;
int var_19 = -1952309038;
unsigned char var_20 = (unsigned char)116;
long long int var_21 = 100045813083238574LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
