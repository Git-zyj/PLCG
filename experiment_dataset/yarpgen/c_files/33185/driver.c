#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3342803173U;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2552954382U;
unsigned long long int var_17 = 6440527201756881918ULL;
int zero = 0;
signed char var_19 = (signed char)-103;
unsigned int var_20 = 3953809098U;
short var_21 = (short)-24085;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
