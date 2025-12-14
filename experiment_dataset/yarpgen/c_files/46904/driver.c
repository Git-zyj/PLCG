#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
long long int var_1 = -3454006454938627421LL;
signed char var_6 = (signed char)-71;
long long int var_10 = -6504195985097614169LL;
int var_11 = -1109447695;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 4559373354899090016ULL;
short var_14 = (short)31991;
int zero = 0;
signed char var_15 = (signed char)34;
short var_16 = (short)-21987;
void init() {
}

void checksum() {
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
