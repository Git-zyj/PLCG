#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14648463602695496613ULL;
unsigned int var_3 = 2534710648U;
int var_5 = -1442340972;
unsigned char var_6 = (unsigned char)137;
unsigned int var_7 = 4227259095U;
unsigned int var_8 = 3670772340U;
short var_16 = (short)22759;
int zero = 0;
unsigned int var_17 = 359146558U;
short var_18 = (short)6492;
short var_19 = (short)-20335;
void init() {
}

void checksum() {
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
