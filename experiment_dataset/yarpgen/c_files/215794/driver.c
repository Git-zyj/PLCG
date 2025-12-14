#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)892;
int var_4 = -1922913518;
unsigned int var_9 = 2762750142U;
unsigned int var_11 = 235112298U;
unsigned short var_13 = (unsigned short)19869;
unsigned short var_14 = (unsigned short)52191;
int var_15 = 1678500583;
int zero = 0;
unsigned int var_17 = 3758030189U;
short var_18 = (short)-4120;
int var_19 = 100588711;
unsigned long long int var_20 = 14127379167908841474ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
