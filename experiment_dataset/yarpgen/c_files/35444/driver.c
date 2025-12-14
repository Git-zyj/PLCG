#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13908223269803226211ULL;
unsigned int var_4 = 3027446227U;
unsigned short var_5 = (unsigned short)56482;
unsigned long long int var_7 = 16159783698022575015ULL;
unsigned long long int var_8 = 4029875779647889803ULL;
unsigned char var_9 = (unsigned char)131;
int zero = 0;
long long int var_16 = -841325406331583383LL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)98;
void init() {
}

void checksum() {
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
