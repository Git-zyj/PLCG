#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3499273363U;
signed char var_4 = (signed char)67;
unsigned char var_9 = (unsigned char)255;
unsigned int var_11 = 506504038U;
int zero = 0;
long long int var_15 = 6540519162304405336LL;
signed char var_16 = (signed char)-125;
unsigned short var_17 = (unsigned short)36737;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
