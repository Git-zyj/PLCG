#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6739629513180248013LL;
short var_2 = (short)-25330;
signed char var_4 = (signed char)-119;
signed char var_8 = (signed char)44;
unsigned long long int var_9 = 2126583488034969307ULL;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 5693090543276846736ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)27156;
void init() {
}

void checksum() {
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
