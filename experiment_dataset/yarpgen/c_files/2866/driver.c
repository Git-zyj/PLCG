#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_6 = -1013481892;
long long int var_7 = -4051048005397963678LL;
_Bool var_8 = (_Bool)1;
signed char var_10 = (signed char)62;
unsigned long long int var_14 = 4049721346653885752ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)25511;
long long int var_18 = -8900577033567786766LL;
short var_19 = (short)-4299;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
