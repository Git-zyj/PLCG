#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3000402435257823675LL;
unsigned long long int var_4 = 11189676471378818622ULL;
unsigned char var_9 = (unsigned char)45;
short var_11 = (short)-9182;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-21520;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-85;
void init() {
}

void checksum() {
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
