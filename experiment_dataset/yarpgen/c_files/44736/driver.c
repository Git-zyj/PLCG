#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44729;
short var_2 = (short)-5903;
int var_3 = 298046404;
unsigned int var_4 = 59430997U;
unsigned char var_5 = (unsigned char)9;
unsigned long long int var_6 = 15954040780139990770ULL;
unsigned long long int var_8 = 12151882855280077408ULL;
unsigned long long int var_9 = 986885773387144965ULL;
int zero = 0;
unsigned int var_11 = 3980549832U;
long long int var_12 = -4571174602096574249LL;
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
