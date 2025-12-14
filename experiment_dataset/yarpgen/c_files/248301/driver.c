#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1282;
unsigned char var_4 = (unsigned char)184;
int var_9 = -1238694553;
unsigned short var_10 = (unsigned short)26454;
int var_11 = 371683470;
unsigned short var_13 = (unsigned short)2974;
int zero = 0;
unsigned char var_15 = (unsigned char)216;
unsigned short var_16 = (unsigned short)17842;
int var_17 = 2744878;
unsigned short var_18 = (unsigned short)31119;
void init() {
}

void checksum() {
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
