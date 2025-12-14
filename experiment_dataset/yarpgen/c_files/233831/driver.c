#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)22671;
signed char var_2 = (signed char)-76;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)5206;
signed char var_7 = (signed char)9;
int var_14 = 299947351;
signed char var_15 = (signed char)-87;
int zero = 0;
unsigned short var_17 = (unsigned short)16669;
int var_18 = 1399511120;
unsigned char var_19 = (unsigned char)148;
long long int var_20 = -3103037027207553280LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
