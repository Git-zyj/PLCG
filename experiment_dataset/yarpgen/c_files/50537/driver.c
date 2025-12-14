#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)23460;
_Bool var_3 = (_Bool)0;
unsigned int var_6 = 1878541000U;
int var_8 = 348430688;
_Bool var_11 = (_Bool)1;
unsigned short var_17 = (unsigned short)43972;
unsigned int var_18 = 3768636575U;
int zero = 0;
unsigned short var_20 = (unsigned short)28042;
short var_21 = (short)377;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 15581721766216974667ULL;
unsigned long long int var_24 = 7844023651618332510ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
