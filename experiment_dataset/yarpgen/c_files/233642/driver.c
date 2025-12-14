#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)8746;
int var_8 = 2130887954;
unsigned char var_9 = (unsigned char)156;
unsigned long long int var_12 = 11305601305817902017ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)31975;
void init() {
}

void checksum() {
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
