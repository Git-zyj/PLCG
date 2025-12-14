#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3800511634U;
signed char var_3 = (signed char)-74;
unsigned char var_6 = (unsigned char)174;
_Bool var_7 = (_Bool)1;
int var_10 = -757946799;
signed char var_11 = (signed char)-47;
unsigned short var_16 = (unsigned short)5862;
int zero = 0;
int var_18 = 226781771;
long long int var_19 = 6234134098016651052LL;
void init() {
}

void checksum() {
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
