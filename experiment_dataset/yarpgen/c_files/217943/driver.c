#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8309824387866595315LL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)25427;
long long int var_5 = -4445589415560418361LL;
long long int var_7 = 5992632079210366294LL;
long long int var_11 = 2938629490839202484LL;
unsigned short var_12 = (unsigned short)27740;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)33015;
_Bool var_16 = (_Bool)0;
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
