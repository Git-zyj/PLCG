#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)121;
int var_2 = -1745312165;
short var_3 = (short)-9078;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3282728102U;
signed char var_9 = (signed char)-29;
int zero = 0;
unsigned short var_10 = (unsigned short)63967;
int var_11 = -1616917775;
short var_12 = (short)8487;
unsigned long long int var_13 = 7666725257800065304ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
