#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31159;
unsigned int var_2 = 1730452734U;
unsigned int var_4 = 1427998066U;
unsigned int var_5 = 2990100004U;
short var_6 = (short)-151;
short var_8 = (short)-10327;
unsigned int var_9 = 2745992493U;
int zero = 0;
unsigned short var_13 = (unsigned short)40700;
long long int var_14 = 3577418326716956073LL;
unsigned int var_15 = 1448124168U;
unsigned short var_16 = (unsigned short)10023;
short var_17 = (short)-13400;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
