#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3323607474824388722LL;
unsigned long long int var_1 = 3591513754017043682ULL;
unsigned char var_4 = (unsigned char)37;
int var_5 = -1838928267;
unsigned char var_8 = (unsigned char)102;
unsigned long long int var_12 = 7858977087603315962ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)116;
short var_15 = (short)-5500;
long long int var_16 = -3976074488813264892LL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
