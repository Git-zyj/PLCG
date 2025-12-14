#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
signed char var_1 = (signed char)-47;
unsigned short var_3 = (unsigned short)50237;
_Bool var_4 = (_Bool)0;
long long int var_6 = -3146350434501440599LL;
long long int var_11 = -5245915369054641265LL;
int zero = 0;
unsigned int var_14 = 263116797U;
unsigned int var_15 = 161299859U;
unsigned char var_16 = (unsigned char)160;
long long int var_17 = 7530720903229034459LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
