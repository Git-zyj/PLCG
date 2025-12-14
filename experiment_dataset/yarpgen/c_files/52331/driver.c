#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1465348099U;
unsigned long long int var_3 = 7151412270157095515ULL;
long long int var_7 = 6963716767260762037LL;
short var_8 = (short)20353;
int var_9 = -1649108197;
long long int var_12 = -2715704006325048825LL;
short var_13 = (short)10592;
int var_16 = -1114905401;
int zero = 0;
short var_17 = (short)1464;
unsigned char var_18 = (unsigned char)238;
long long int var_19 = -6924450016820689646LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
