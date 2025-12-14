#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4101551427U;
long long int var_4 = -230790446261739346LL;
long long int var_6 = 679920403024676861LL;
short var_7 = (short)-14237;
long long int var_8 = -4347966731647992929LL;
long long int var_9 = 4125562225360461096LL;
short var_10 = (short)-11602;
unsigned int var_13 = 3941908726U;
unsigned int var_14 = 3826735325U;
int zero = 0;
unsigned int var_15 = 601223008U;
unsigned int var_16 = 2379786863U;
unsigned int var_17 = 1715693818U;
short var_18 = (short)2251;
long long int var_19 = -7479853130921074043LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
