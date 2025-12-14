#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)212;
int var_1 = -1559001507;
signed char var_4 = (signed char)90;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 846209032U;
_Bool var_9 = (_Bool)1;
signed char var_14 = (signed char)120;
int zero = 0;
unsigned char var_17 = (unsigned char)62;
unsigned char var_18 = (unsigned char)179;
int var_19 = -448653140;
unsigned int var_20 = 691712397U;
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
