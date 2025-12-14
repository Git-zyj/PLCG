#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3391205303825839652LL;
unsigned short var_7 = (unsigned short)10802;
_Bool var_8 = (_Bool)1;
int var_11 = -1612638527;
int zero = 0;
unsigned char var_16 = (unsigned char)145;
short var_17 = (short)26241;
int var_18 = 1030228452;
short var_19 = (short)-21709;
int var_20 = 627028238;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
