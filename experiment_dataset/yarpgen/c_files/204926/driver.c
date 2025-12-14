#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14996519080403957260ULL;
unsigned long long int var_6 = 8892529456078822233ULL;
long long int var_7 = -3521852754167397816LL;
unsigned short var_9 = (unsigned short)17912;
long long int var_11 = -8678763043820770303LL;
int var_12 = -1911423533;
long long int var_13 = -394575224984340562LL;
long long int var_14 = -1631196855540704808LL;
int zero = 0;
signed char var_15 = (signed char)-102;
unsigned char var_16 = (unsigned char)229;
int var_17 = 999639112;
unsigned char var_18 = (unsigned char)61;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
