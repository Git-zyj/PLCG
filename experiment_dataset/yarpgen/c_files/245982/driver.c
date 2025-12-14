#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)50720;
unsigned long long int var_4 = 7811285067644909802ULL;
unsigned short var_6 = (unsigned short)43920;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 14140148995670305959ULL;
int zero = 0;
int var_14 = -1261567055;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)114;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 3201688862694285141ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
