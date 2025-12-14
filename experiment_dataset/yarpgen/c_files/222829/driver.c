#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)31;
signed char var_7 = (signed char)-62;
unsigned long long int var_8 = 18271117758222937158ULL;
unsigned int var_9 = 452985658U;
unsigned int var_10 = 3436241548U;
long long int var_12 = -120735169924526494LL;
unsigned short var_14 = (unsigned short)18928;
int zero = 0;
unsigned char var_18 = (unsigned char)8;
unsigned int var_19 = 1738739063U;
unsigned short var_20 = (unsigned short)46575;
unsigned short var_21 = (unsigned short)10456;
signed char var_22 = (signed char)64;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
