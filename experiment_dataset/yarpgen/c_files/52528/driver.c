#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)121;
long long int var_4 = 9141254539694539921LL;
unsigned long long int var_5 = 6545649342853536718ULL;
long long int var_6 = 3052389591217132523LL;
_Bool var_8 = (_Bool)0;
signed char var_11 = (signed char)104;
int zero = 0;
unsigned int var_12 = 1440429959U;
int var_13 = 675655247;
unsigned long long int var_14 = 12449600869679976248ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
