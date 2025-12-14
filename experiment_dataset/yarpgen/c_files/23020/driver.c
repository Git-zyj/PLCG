#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1336375485;
short var_3 = (short)14834;
unsigned long long int var_8 = 2713680004912137440ULL;
long long int var_10 = -5352439061304339891LL;
unsigned char var_12 = (unsigned char)0;
unsigned long long int var_15 = 10828608195344280544ULL;
int zero = 0;
short var_16 = (short)8318;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)20963;
void init() {
}

void checksum() {
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
