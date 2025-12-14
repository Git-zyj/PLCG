#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)191;
unsigned int var_7 = 2723680728U;
unsigned long long int var_9 = 584524110083405701ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 2703864059329067858ULL;
signed char var_15 = (signed char)-58;
short var_16 = (short)5310;
unsigned char var_17 = (unsigned char)76;
unsigned char var_18 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
