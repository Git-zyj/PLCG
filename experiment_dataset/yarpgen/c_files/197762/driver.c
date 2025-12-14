#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5603892421952966588LL;
unsigned short var_6 = (unsigned short)27907;
long long int var_13 = 5587553969168218130LL;
int zero = 0;
unsigned short var_16 = (unsigned short)49318;
short var_17 = (short)18792;
unsigned short var_18 = (unsigned short)13426;
unsigned char var_19 = (unsigned char)10;
unsigned long long int var_20 = 17635876160976167018ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
