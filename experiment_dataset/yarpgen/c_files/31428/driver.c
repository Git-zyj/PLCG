#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 231681582099566904ULL;
signed char var_1 = (signed char)-40;
unsigned int var_2 = 1121426525U;
signed char var_3 = (signed char)-19;
unsigned int var_5 = 76477645U;
unsigned long long int var_6 = 15812562669831439467ULL;
unsigned int var_8 = 553358880U;
int var_14 = 1264672204;
int zero = 0;
long long int var_16 = -2682917772769183411LL;
unsigned short var_17 = (unsigned short)32840;
unsigned int var_18 = 2953810924U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
