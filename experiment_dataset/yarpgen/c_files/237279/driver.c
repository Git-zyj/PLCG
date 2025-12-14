#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)6093;
unsigned short var_4 = (unsigned short)6615;
unsigned short var_7 = (unsigned short)25128;
int var_11 = 1705247799;
short var_12 = (short)9748;
int zero = 0;
unsigned long long int var_13 = 11643544643383783734ULL;
int var_14 = 474743143;
short var_15 = (short)-1605;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
