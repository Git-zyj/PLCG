#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12474;
unsigned long long int var_1 = 17422220448612833284ULL;
unsigned char var_2 = (unsigned char)172;
short var_3 = (short)13506;
unsigned short var_4 = (unsigned short)12633;
unsigned long long int var_6 = 2444872469107788265ULL;
_Bool var_7 = (_Bool)1;
int var_8 = 1937667152;
int var_9 = 1578381823;
unsigned short var_10 = (unsigned short)13690;
int zero = 0;
unsigned long long int var_11 = 2205520900140132789ULL;
unsigned int var_12 = 491420973U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
