#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 638786586U;
unsigned int var_1 = 2960668929U;
unsigned int var_2 = 838328922U;
long long int var_5 = 342358953717585670LL;
unsigned int var_6 = 1396537216U;
unsigned int var_7 = 57496862U;
unsigned short var_10 = (unsigned short)26761;
unsigned int var_12 = 3893945501U;
unsigned int var_13 = 3735294645U;
int zero = 0;
unsigned int var_14 = 2423884326U;
unsigned int var_15 = 4236490539U;
unsigned short var_16 = (unsigned short)59321;
unsigned short var_17 = (unsigned short)38073;
int var_18 = -681823503;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
