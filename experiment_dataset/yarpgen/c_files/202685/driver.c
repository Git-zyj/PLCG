#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16019710183996231419ULL;
unsigned long long int var_2 = 6939680698942252235ULL;
unsigned long long int var_3 = 16271363489326298245ULL;
unsigned long long int var_4 = 7511342732523646404ULL;
unsigned char var_8 = (unsigned char)240;
int var_9 = 323156174;
unsigned char var_10 = (unsigned char)226;
int zero = 0;
int var_11 = -1558371895;
signed char var_12 = (signed char)18;
unsigned long long int var_13 = 7363047258612130871ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
