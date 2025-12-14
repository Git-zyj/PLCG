#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-15;
short var_1 = (short)-5256;
unsigned long long int var_5 = 9851609115149952271ULL;
unsigned char var_6 = (unsigned char)103;
unsigned char var_9 = (unsigned char)114;
signed char var_11 = (signed char)1;
int var_14 = 1209776285;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = 5340036103428398938LL;
unsigned short var_17 = (unsigned short)33973;
void init() {
}

void checksum() {
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
