#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_4 = 1330028175U;
long long int var_6 = 6858185089457027341LL;
long long int var_7 = 8684124363987304034LL;
unsigned char var_8 = (unsigned char)108;
long long int var_9 = 907729820488826851LL;
unsigned char var_10 = (unsigned char)240;
long long int var_11 = -7379629747978460015LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-18;
int var_15 = 1869120763;
unsigned char var_16 = (unsigned char)72;
unsigned int var_17 = 1882614148U;
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
