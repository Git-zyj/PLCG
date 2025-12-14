#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 489824719;
long long int var_4 = -3338830766830580068LL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-124;
unsigned char var_7 = (unsigned char)86;
long long int var_8 = -7125213975076072791LL;
int zero = 0;
int var_10 = -772263084;
int var_11 = -1411866433;
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
