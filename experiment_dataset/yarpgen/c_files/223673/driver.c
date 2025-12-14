#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)245;
int var_2 = -1115340031;
signed char var_4 = (signed char)-103;
unsigned int var_5 = 1273511185U;
unsigned short var_6 = (unsigned short)52867;
long long int var_9 = 445600764574053955LL;
signed char var_10 = (signed char)-116;
int zero = 0;
unsigned long long int var_12 = 15139807324838121983ULL;
unsigned long long int var_13 = 6938743652841562792ULL;
_Bool var_14 = (_Bool)1;
int var_15 = 1852436769;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
