#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2963894369465363211LL;
int var_3 = -1947096398;
short var_4 = (short)3276;
int var_8 = -440758818;
short var_10 = (short)30952;
unsigned long long int var_11 = 3322654312398740411ULL;
int var_12 = -1091129367;
unsigned long long int var_15 = 9035370836240054109ULL;
short var_16 = (short)-27667;
int zero = 0;
long long int var_17 = 1293324470637784362LL;
int var_18 = 1232608903;
short var_19 = (short)-31072;
int var_20 = -1575548539;
void init() {
}

void checksum() {
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
