#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35824;
unsigned short var_2 = (unsigned short)19108;
short var_4 = (short)18142;
unsigned short var_5 = (unsigned short)8966;
long long int var_7 = 4596789928214546687LL;
signed char var_8 = (signed char)97;
int var_9 = -559392580;
int var_10 = -228364884;
int zero = 0;
long long int var_12 = -8296888926348480665LL;
unsigned char var_13 = (unsigned char)217;
long long int var_14 = -1124968404336870780LL;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 13180382321858835265ULL;
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
