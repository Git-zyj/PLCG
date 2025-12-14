#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12063;
short var_4 = (short)4049;
unsigned char var_8 = (unsigned char)138;
unsigned long long int var_10 = 14042725844874729989ULL;
unsigned long long int var_11 = 1407917729060965797ULL;
unsigned long long int var_12 = 10962015953767115565ULL;
unsigned int var_13 = 2622525059U;
short var_15 = (short)19059;
int zero = 0;
unsigned short var_17 = (unsigned short)50642;
unsigned long long int var_18 = 7805473337595034750ULL;
unsigned long long int var_19 = 5971825584991699601ULL;
unsigned char var_20 = (unsigned char)66;
unsigned short var_21 = (unsigned short)58784;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
