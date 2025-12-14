#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
unsigned long long int var_3 = 7150557401480828381ULL;
int var_5 = -1913782738;
unsigned int var_9 = 695332176U;
signed char var_10 = (signed char)-112;
unsigned short var_14 = (unsigned short)44075;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
int var_21 = -848525882;
int var_22 = -1503977526;
int var_23 = 1565514947;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
