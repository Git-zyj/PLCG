#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)196;
short var_1 = (short)-27603;
unsigned int var_3 = 946366530U;
unsigned int var_5 = 3575806813U;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 3669983238U;
unsigned char var_11 = (unsigned char)150;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2674744193U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
