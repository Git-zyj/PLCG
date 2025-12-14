#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41504;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)43928;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-102;
unsigned short var_8 = (unsigned short)19842;
unsigned short var_9 = (unsigned short)46090;
unsigned long long int var_10 = 11295051144431428723ULL;
long long int var_12 = -4559885792628966024LL;
int zero = 0;
signed char var_14 = (signed char)77;
signed char var_15 = (signed char)-89;
long long int var_16 = 4651701384011304032LL;
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
