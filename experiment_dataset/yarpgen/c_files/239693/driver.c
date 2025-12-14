#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)26;
long long int var_5 = -5304920538561130134LL;
int var_7 = -1910634551;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 11752251504720822544ULL;
int var_12 = -1128915669;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)27154;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
