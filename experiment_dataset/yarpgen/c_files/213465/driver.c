#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)24834;
short var_4 = (short)-16992;
_Bool var_5 = (_Bool)1;
int var_8 = -766412348;
short var_11 = (short)1194;
short var_12 = (short)-16381;
long long int var_13 = -7834343679280835912LL;
long long int var_14 = -8268811026308368670LL;
unsigned char var_15 = (unsigned char)214;
int zero = 0;
unsigned long long int var_17 = 17914754874232617392ULL;
unsigned short var_18 = (unsigned short)2013;
void init() {
}

void checksum() {
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
