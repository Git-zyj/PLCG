#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 965527868U;
int var_3 = -1717131563;
signed char var_5 = (signed char)125;
unsigned int var_6 = 698493446U;
unsigned short var_8 = (unsigned short)43138;
long long int var_9 = -7118148987103738414LL;
int var_11 = 14771506;
int zero = 0;
unsigned short var_14 = (unsigned short)3098;
unsigned int var_15 = 1889035111U;
int var_16 = 564237956;
int var_17 = -1382809485;
void init() {
}

void checksum() {
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
