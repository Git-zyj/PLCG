#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2461717741U;
long long int var_5 = 7783612471344928551LL;
signed char var_6 = (signed char)-80;
int var_7 = -803920666;
int zero = 0;
unsigned char var_19 = (unsigned char)142;
unsigned int var_20 = 2700741647U;
void init() {
}

void checksum() {
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
