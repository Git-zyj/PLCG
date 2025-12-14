#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 13812866;
int var_2 = 792531200;
unsigned char var_4 = (unsigned char)16;
short var_6 = (short)15469;
unsigned long long int var_8 = 7781105999601131798ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 15877266510143651326ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
