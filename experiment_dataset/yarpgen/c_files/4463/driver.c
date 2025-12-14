#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5519506554674990715LL;
long long int var_2 = -3817549113724074971LL;
long long int var_3 = 5048818444401753181LL;
unsigned char var_7 = (unsigned char)103;
long long int var_8 = 2077822712733752170LL;
long long int var_10 = 6169844707555184775LL;
unsigned char var_13 = (unsigned char)90;
int zero = 0;
unsigned char var_17 = (unsigned char)182;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
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
