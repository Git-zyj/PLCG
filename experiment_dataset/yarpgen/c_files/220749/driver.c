#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25127;
unsigned short var_2 = (unsigned short)3723;
_Bool var_3 = (_Bool)0;
long long int var_4 = 6266136883352853014LL;
short var_6 = (short)18631;
unsigned short var_8 = (unsigned short)32518;
int zero = 0;
unsigned long long int var_10 = 14908932126053071120ULL;
unsigned long long int var_11 = 17856448340392227750ULL;
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
